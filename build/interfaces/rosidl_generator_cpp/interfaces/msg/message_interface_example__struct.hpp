// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/MessageInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_HPP_
#define INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__MessageInterfaceExample __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__MessageInterfaceExample __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MessageInterfaceExample_
{
  using Type = MessageInterfaceExample_<ContainerAllocator>;

  explicit MessageInterfaceExample_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->message = "default_message";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->message = "";
    }
  }

  explicit MessageInterfaceExample_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->message = "default_message";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::MessageInterfaceExample_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::MessageInterfaceExample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MessageInterfaceExample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MessageInterfaceExample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__MessageInterfaceExample
    std::shared_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__MessageInterfaceExample
    std::shared_ptr<interfaces::msg::MessageInterfaceExample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageInterfaceExample_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageInterfaceExample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageInterfaceExample_

// alias to use template instance with default allocator
using MessageInterfaceExample =
  interfaces::msg::MessageInterfaceExample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__MESSAGE_INTERFACE_EXAMPLE__STRUCT_HPP_
