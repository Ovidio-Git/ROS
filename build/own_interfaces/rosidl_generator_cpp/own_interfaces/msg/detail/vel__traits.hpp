// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__MSG__DETAIL__VEL__TRAITS_HPP_
#define OWN_INTERFACES__MSG__DETAIL__VEL__TRAITS_HPP_

#include "own_interfaces/msg/detail/vel__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const own_interfaces::msg::Vel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    value_to_yaml(msg.vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const own_interfaces::msg::Vel & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<own_interfaces::msg::Vel>()
{
  return "own_interfaces::msg::Vel";
}

template<>
inline const char * name<own_interfaces::msg::Vel>()
{
  return "own_interfaces/msg/Vel";
}

template<>
struct has_fixed_size<own_interfaces::msg::Vel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<own_interfaces::msg::Vel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<own_interfaces::msg::Vel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OWN_INTERFACES__MSG__DETAIL__VEL__TRAITS_HPP_
