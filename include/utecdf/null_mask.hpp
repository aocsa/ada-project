#pragma once

#include <utecdf/types.hpp>

namespace utecdf {

/**---------------------------------------------------------------------------*
 * @brief Controls the allocation/initialization of a null mask.
 *---------------------------------------------------------------------------**/
enum mask_state {
  UNALLOCATED,    ///< Null mask not allocated
  UNINITIALIZED,  ///< Null mask allocated, but not initialized
  ALL_VALID,      ///< Null mask allocated, initialized to all valid values
  ALL_NULL        ///< Null mask allocated, initialized to all NULL
};
 
}  // namespace utecdf