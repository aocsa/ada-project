#pragma once

#include <memory>
#include <type_traits>
#include <utecdf/types.hpp>
#include <utility>
#include <vector>

namespace utecdf {

class column {
public:
  column() = default;
  ~column() = default;

  column &operator=(column const &other) = delete;
  column &operator=(column &&other) = delete;
  column(column const &other) = delete;
  column(column &&other) = delete;

  template <typename B1, typename B2>
  column(data_type dtype, size_type size, B1 &&data, B2 &&null_mask = {},
         size_type null_count = UNKNOWN_NULL_COUNT)
      : _type{dtype}, _size{size}, _data{std::forward<B1>(data)},
        _null_mask{std::forward<B2>(null_mask)}, _null_count{null_count} {}

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
