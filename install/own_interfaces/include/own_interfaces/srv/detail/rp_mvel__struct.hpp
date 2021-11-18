// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_HPP_
#define OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__own_interfaces__srv__RPMvel_Request __attribute__((deprecated))
#else
# define DEPRECATED__own_interfaces__srv__RPMvel_Request __declspec(deprecated)
#endif

namespace own_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RPMvel_Request_
{
  using Type = RPMvel_Request_<ContainerAllocator>;

  explicit RPMvel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0ll;
      this->r = 0.0f;
    }
  }

  explicit RPMvel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0ll;
      this->r = 0.0f;
    }
  }

  // field types and members
  using _rpm_type =
    int64_t;
  _rpm_type rpm;
  using _r_type =
    float;
  _r_type r;

  // setters for named parameter idiom
  Type & set__rpm(
    const int64_t & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    own_interfaces::srv::RPMvel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const own_interfaces::srv::RPMvel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      own_interfaces::srv::RPMvel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      own_interfaces::srv::RPMvel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__own_interfaces__srv__RPMvel_Request
    std::shared_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__own_interfaces__srv__RPMvel_Request
    std::shared_ptr<own_interfaces::srv::RPMvel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RPMvel_Request_ & other) const
  {
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    return true;
  }
  bool operator!=(const RPMvel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RPMvel_Request_

// alias to use template instance with default allocator
using RPMvel_Request =
  own_interfaces::srv::RPMvel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace own_interfaces


#ifndef _WIN32
# define DEPRECATED__own_interfaces__srv__RPMvel_Response __attribute__((deprecated))
#else
# define DEPRECATED__own_interfaces__srv__RPMvel_Response __declspec(deprecated)
#endif

namespace own_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RPMvel_Response_
{
  using Type = RPMvel_Response_<ContainerAllocator>;

  explicit RPMvel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0;
    }
  }

  explicit RPMvel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0;
    }
  }

  // field types and members
  using _vel_type =
    double;
  _vel_type vel;

  // setters for named parameter idiom
  Type & set__vel(
    const double & _arg)
  {
    this->vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    own_interfaces::srv::RPMvel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const own_interfaces::srv::RPMvel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      own_interfaces::srv::RPMvel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      own_interfaces::srv::RPMvel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__own_interfaces__srv__RPMvel_Response
    std::shared_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__own_interfaces__srv__RPMvel_Response
    std::shared_ptr<own_interfaces::srv::RPMvel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RPMvel_Response_ & other) const
  {
    if (this->vel != other.vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const RPMvel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RPMvel_Response_

// alias to use template instance with default allocator
using RPMvel_Response =
  own_interfaces::srv::RPMvel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace own_interfaces

namespace own_interfaces
{

namespace srv
{

struct RPMvel
{
  using Request = own_interfaces::srv::RPMvel_Request;
  using Response = own_interfaces::srv::RPMvel_Response;
};

}  // namespace srv

}  // namespace own_interfaces

#endif  // OWN_INTERFACES__SRV__DETAIL__RP_MVEL__STRUCT_HPP_
