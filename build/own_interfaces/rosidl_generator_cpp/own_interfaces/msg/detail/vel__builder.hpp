// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from own_interfaces:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__MSG__DETAIL__VEL__BUILDER_HPP_
#define OWN_INTERFACES__MSG__DETAIL__VEL__BUILDER_HPP_

#include "own_interfaces/msg/detail/vel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace own_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vel_vel
{
public:
  Init_Vel_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::own_interfaces::msg::Vel vel(::own_interfaces::msg::Vel::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::own_interfaces::msg::Vel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::own_interfaces::msg::Vel>()
{
  return own_interfaces::msg::builder::Init_Vel_vel();
}

}  // namespace own_interfaces

#endif  // OWN_INTERFACES__MSG__DETAIL__VEL__BUILDER_HPP_
