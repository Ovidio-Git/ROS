// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__SRV__DETAIL__RP_MVEL__TRAITS_HPP_
#define OWN_INTERFACES__SRV__DETAIL__RP_MVEL__TRAITS_HPP_

#include "own_interfaces/srv/detail/rp_mvel__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const own_interfaces::srv::RPMvel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    value_to_yaml(msg.rpm, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const own_interfaces::srv::RPMvel_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<own_interfaces::srv::RPMvel_Request>()
{
  return "own_interfaces::srv::RPMvel_Request";
}

template<>
inline const char * name<own_interfaces::srv::RPMvel_Request>()
{
  return "own_interfaces/srv/RPMvel_Request";
}

template<>
struct has_fixed_size<own_interfaces::srv::RPMvel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<own_interfaces::srv::RPMvel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<own_interfaces::srv::RPMvel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const own_interfaces::srv::RPMvel_Response & msg,
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

inline std::string to_yaml(const own_interfaces::srv::RPMvel_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<own_interfaces::srv::RPMvel_Response>()
{
  return "own_interfaces::srv::RPMvel_Response";
}

template<>
inline const char * name<own_interfaces::srv::RPMvel_Response>()
{
  return "own_interfaces/srv/RPMvel_Response";
}

template<>
struct has_fixed_size<own_interfaces::srv::RPMvel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<own_interfaces::srv::RPMvel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<own_interfaces::srv::RPMvel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<own_interfaces::srv::RPMvel>()
{
  return "own_interfaces::srv::RPMvel";
}

template<>
inline const char * name<own_interfaces::srv::RPMvel>()
{
  return "own_interfaces/srv/RPMvel";
}

template<>
struct has_fixed_size<own_interfaces::srv::RPMvel>
  : std::integral_constant<
    bool,
    has_fixed_size<own_interfaces::srv::RPMvel_Request>::value &&
    has_fixed_size<own_interfaces::srv::RPMvel_Response>::value
  >
{
};

template<>
struct has_bounded_size<own_interfaces::srv::RPMvel>
  : std::integral_constant<
    bool,
    has_bounded_size<own_interfaces::srv::RPMvel_Request>::value &&
    has_bounded_size<own_interfaces::srv::RPMvel_Response>::value
  >
{
};

template<>
struct is_service<own_interfaces::srv::RPMvel>
  : std::true_type
{
};

template<>
struct is_service_request<own_interfaces::srv::RPMvel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<own_interfaces::srv::RPMvel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OWN_INTERFACES__SRV__DETAIL__RP_MVEL__TRAITS_HPP_
