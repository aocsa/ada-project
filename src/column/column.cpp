#pragma once

#include <utecdf/column/column.hpp>
#include <utecdf/utecdf.hpp>

#include <utecdf/utilities/error_utils.hpp>

#include <memory>
#include <type_traits>
#include <utility>
#include <vector>

namespace utecdf {

size_type column::null_count() const {
  if (_null_count > UNKNOWN_NULL_COUNT) {
    return _null_count;
  } else {
    // If the null mask isn't allocated, then we can return 0
    if (0 == _null_mask.size()) {
      _null_count = 0;
      return null_count();
    }
    UTECDF_FAIL(
        "On-demand computation of null count is not currently supported.");
  }
}

void column::set_null_count(size_type new_null_count) {
  if (new_null_count > 0) {
    UTECDF_EXPECTS(nullable(), "Invalid null count.");
  }
  _null_count = new_null_count;
}

} // namespace utecdf
