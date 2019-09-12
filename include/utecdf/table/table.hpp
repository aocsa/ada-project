#pragma once

#include <utecdf/column/column.hpp>
#include <utecdf/table/table_view.hpp>

#include <memory>
#include <vector>

namespace utecdf { 

class table {
 public:
  table() = delete;
  ~table() = default;
  table(table&&) = default;
  table& operator=(table const&) = delete;
  table& operator=(table&&) = delete;

  /**---------------------------------------------------------------------------*
   * @brief Construct a new table by copying the contents of another table.
   *---------------------------------------------------------------------------**/
  table(table const& other);

  /**---------------------------------------------------------------------------*
   * @brief Moves the contents from a vector of `unique_ptr`s to columns to
   * construct a new table.
   *
   * @param columns The vector of `unique_ptr`s to columns whose contents will
   * be moved into the new table.
   *---------------------------------------------------------------------------**/
  table(std::vector<std::unique_ptr<column>>&& columns);

  /**---------------------------------------------------------------------------*
   * @brief Returns the number of columns in the table
   *---------------------------------------------------------------------------**/
  size_type num_columns() const noexcept { return _columns.size(); }

  /**---------------------------------------------------------------------------*
   * @brief Returns the number of rows
   *---------------------------------------------------------------------------**/
  size_type num_rows() const noexcept { return _num_rows; }
 
  /**---------------------------------------------------------------------------*
   * @brief Releases ownership of the `column`s by returning a vector of
   *`unique_ptr`s to the constiuent columns.
   *
   * After `release()`, `num_columns() == 0` and `num_rows() == 0`
   *---------------------------------------------------------------------------**/
  std::vector<std::unique_ptr<column>> release();

 private:
  std::vector<std::unique_ptr<column>> _columns{};
  size_type _num_rows{};
}; 
}  // namespace utecdf
