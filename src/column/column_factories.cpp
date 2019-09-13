#include <utecdf/column/column_factories.hpp>
#include <utecdf/null_mask.hpp>
#include <utecdf/utilities/traits.hpp>
#include <utecdf/utilities/error_utils.hpp>

namespace utecdf {

namespace {
struct size_of_helper {
  template <typename T>
  constexpr int operator()() const noexcept {
    return sizeof(T);
  }
};

/**
 * @brief Returns the size in bytes of elements of the specified `data_type`
 *
 * @note Only fixed-width types are supported
 *
 * @throws utecdf::logic_error if `is_fixed_width(element_type) == false`
 *
 * TODO: This should go somewhere else
 */
constexpr inline std::size_t size_of(data_type element_type) {
  UTECDF_EXPECTS(is_fixed_width(element_type), "Invalid element type.");
  return utecdf::type_dispatcher(element_type, size_of_helper{});
}

}  // namespace

// Allocate storage for a specified number of numeric elements
std::unique_ptr<column> make_numeric_column(
    data_type type, size_type size, mask_state state) {
  UTECDF_EXPECTS(is_numeric(type), "Invalid, non-numeric type.");

  return std::make_unique<column>();
}
}  // namespace utecdf
