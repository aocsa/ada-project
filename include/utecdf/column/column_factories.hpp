#pragma once

#include <utecdf/null_mask.hpp>
#include <utecdf/types.hpp>
#include "column.hpp"

namespace utecdf {
/**---------------------------------------------------------------------------*
 * @brief Construct column with sufficient uninitialized storage
 * to hold `size` elements of the specified numeric `data_type` with an optional
 * null mask.
 * 
 * @note `null_count()` is determined by the requested null mask `state`
 *
 * @throws std::bad_alloc if device memory allocation fails
 * @throws utecdf::logic_error if `type` is not a numeric type
 *
 * @param[in] type The desired numeric element type
 * @param[in] size The number of elements in the column
 * @param[in] state Optional, controls allocation/initialization of the
 * column's null mask. By default, no null mask is allocated.
 * allocation of the column's `data` and `null_mask`.
 *---------------------------------------------------------------------------**/
std::unique_ptr<column> make_numeric_column(
    data_type type, size_type size, mask_state state = UNALLOCATED);
}  // namespace utecdf
