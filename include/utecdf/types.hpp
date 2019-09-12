#pragma once

#include <cstdlib>
#include <cstdint>
#include <cstddef>

/**---------------------------------------------------------------------------*
 * @file types.hpp
 * @brief Type declarations for libutecdf.
 *
 *---------------------------------------------------------------------------**/
namespace bit_mask {
using bit_mask_t = uint32_t;
}

namespace utecdf {

// Forward declaration
class table;
class column;

using size_type = int32_t;
using bitmask_type = uint32_t;

enum type_id {
  EMPTY = 0,  ///< Always null with no underlying data
  INT8,       ///< 1 byte signed integer
  INT16,      ///< 2 byte signed integer
  INT32,      ///< 4 byte signed integer
  INT64,      ///< 8 byte signed integer
  FLOAT32,    ///< 4 byte floating point
  FLOAT64,    ///< 8 byte floating point
  BOOL8,      ///< Boolean using one byte per value, 0 == false, else true
  DATE32,     ///< days since Unix Epoch in int32
  TIMESTAMP,  ///< duration of specified resolution since Unix Epoch in int64
  NUM_TYPE_IDS  ///< Total number of type ids
};

/**---------------------------------------------------------------------------*
 * @brief Indicator for the logical data type of an element in a column.
 *
 * Simple types can be be entirely described by their `id()`, but some types
 * require additional metadata to fully describe elements of that type.
 *---------------------------------------------------------------------------**/
class data_type {
 public:
  data_type() = default;
  ~data_type() = default;
  data_type(data_type const&) = default;
  data_type(data_type&&) = default;
  data_type& operator=(data_type const&) = default;
  data_type& operator=(data_type&&) = default;

  explicit constexpr data_type(type_id id) : _id{id} {}

  type_id id() const noexcept { return _id; }

 private:
  type_id _id{EMPTY};
  // Store additional type specific metadata, timezone, decimal precision and
  // scale, etc.
};
static constexpr size_type UNKNOWN_NULL_COUNT{-1};

}  // namespace utecdf
