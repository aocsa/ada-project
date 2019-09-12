#pragma once

#include <utecdf/types.hpp>
#include <memory>
#include <vector>

namespace utecdf {

/**---------------------------------------------------------------------------*
 * @brief Indicates the order in which a column should be sorted.
 *---------------------------------------------------------------------------**/
enum class order : bool { ASCENDING, DESCENDING };

/**---------------------------------------------------------------------------*
 * @brief Indicates how null values compare against all other values.
 *
 * If `AFTER`, `NULL` values are ordered *after* all other values
 *
 * If `BEFORE`, `NULL` values are ordered *before* all other values
 *---------------------------------------------------------------------------**/
enum class null_order : bool { AFTER, BEFORE };

/**---------------------------------------------------------------------------*
 * @brief Computes the row indices that would produce `input`  in a
 * lexicographical sorted order.
 *
 * @param input The table to sort
 * @param column_order The desired sort order for each column. Size must be
 * equal to `input.num_columns()` or empty. If empty, all columns will be sorted
 * in ascending order.
 * @param null_precedence The size of a NULL value in comparison to all other
 * values
 * @return std::unique_ptr<column> A non-nullable column of INT32 elements
 * containing the permuted row indices of `input` if it were sorted
 *---------------------------------------------------------------------------**/
std::unique_ptr<column> sorted_order(table *input,
                                     std::vector<order> const& column_order,
                                     null_order null_precedence);
}  // namespace utecdf