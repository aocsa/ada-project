#pragma once

#include <memory>
#include <utecdf/column/column.hpp>
#include <utecdf/orderby/orderby.hpp>
#include <utecdf/types.hpp>
#include <vector>

namespace utecdf {

std::unique_ptr<column> sorted_order(table *input,
                                     std::vector<order> const &column_order,
                                     null_order null_precedence) {
  return std::make_unique<column>();
}
} // namespace utecdf