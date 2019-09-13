#pragma once

#include <iostream>
#include <stdexcept>
#include <string>

namespace utecdf {

#define STRINGIFY_DETAIL(x) #x
#define UTECDF_STRINGIFY(x) STRINGIFY_DETAIL(x)

struct logic_error : public std::logic_error {
  logic_error(char const *const message) : std::logic_error(message) {}

  logic_error(std::string const &message) : std::logic_error(message) {}
}; 

} // namespace utecdf

/**---------------------------------------------------------------------------*
 * @brief Indicates that an erroneous code path has been taken.
 *
 * In host code, throws a `cudf::logic_error`.
 *
 *
 * Example usage:
 * ```
 * UTECDF_FAIL("Non-arithmetic operation is not supported");
 * ```
 *
 * @param[in] reason String literal description of the reason
 *---------------------------------------------------------------------------**/
#define UTECDF_FAIL(reason)                                                    \
  throw utecdf::logic_error("failure at: " __FILE__                            \
                            ":" UTECDF_STRINGIFY(__LINE__) ": " reason)

/**---------------------------------------------------------------------------*
 * @brief Macro for checking (pre-)conditions that throws an exception when
 * a condition is violated.
 *
 * Example usage:
 *
 * @code
 * UTECDF_EXPECTS(lhs->dtype == rhs->dtype, "Column type mismatch");
 * @endcode
 *
 * @param[in] cond Expression that evaluates to true or false
 * @param[in] reason String literal description of the reason that cond is
 * expected to be true
 * @throw utecdf::logic_error if the condition evaluates to false.
 *---------------------------------------------------------------------------**/
#define UTECDF_EXPECTS(cond, reason)                                           \
  (!!(cond))                                                                   \
      ? static_cast<void>(0)                                                   \
      : throw utecdf::logic_error("failure at: " __FILE__                      \
                                  ":" UTECDF_STRINGIFY(__LINE__) ": " reason)
