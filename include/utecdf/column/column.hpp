#pragma once

#include <memory>
#include <type_traits>
#include <utecdf/types.hpp>
#include <utility>
#include <vector>
#include <string>

namespace utecdf {

class column {
public:
  column() = default;
  ~column() = default;

  column &operator=(column const &other) = delete;
  column &operator=(column &&other) = delete;
  column(column const &other) = delete;
  column(column &&other) = delete;
 
  data_type type() const noexcept { return _type; }

  size_type size() const noexcept { return _size; }

  size_type null_count() const;

  void set_null_count(size_type new_null_count);

  bool nullable() const noexcept { return (_null_mask.size() > 0); }

  bool has_nulls() const noexcept { return (null_count() > 0); }

private:
  data_type _type{EMPTY};
  size_t _size{};
  void *_data{};
    std::basic_string<int8_t> _null_mask{};
  mutable size_type _null_count{UNKNOWN_NULL_COUNT};
};

} // namespace utecdf
