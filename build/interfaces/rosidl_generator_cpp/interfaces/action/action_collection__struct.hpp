// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:action/ActionCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_HPP_
#define INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_Goal __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_Goal_
{
  using Type = ActionCollection_Goal_<ContainerAllocator>;

  explicit ActionCollection_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  explicit ActionCollection_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : static_five_long_int_arr(_alloc),
    string_t(_alloc),
    static_five_string_arr(_alloc),
    bounded_ten_char_string_t(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  // field types and members
  using _bool_t_type =
    bool;
  _bool_t_type bool_t;
  using _byte_t_type =
    unsigned char;
  _byte_t_type byte_t;
  using _char_t_type =
    uint8_t;
  _char_t_type char_t;
  using _float_t_type =
    float;
  _float_t_type float_t;
  using _double_t_type =
    double;
  _double_t_type double_t;
  using _octet_int_t_type =
    int8_t;
  _octet_int_t_type octet_int_t;
  using _octet_uint_t_type =
    uint8_t;
  _octet_uint_t_type octet_uint_t;
  using _short_int_t_type =
    int16_t;
  _short_int_t_type short_int_t;
  using _short_uint_t_type =
    uint16_t;
  _short_uint_t_type short_uint_t;
  using _long_int_t_type =
    int32_t;
  _long_int_t_type long_int_t;
  using _long_uint_t_type =
    uint32_t;
  _long_uint_t_type long_uint_t;
  using _long_long_int_t_type =
    int64_t;
  _long_long_int_t_type long_long_int_t;
  using _long_long_uint_t_type =
    uint64_t;
  _long_long_uint_t_type long_long_uint_t;
  using _unbounded_long_int_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _unbounded_long_int_arr_type unbounded_long_int_arr;
  using _static_five_long_int_arr_type =
    std::array<int32_t, 5>;
  _static_five_long_int_arr_type static_five_long_int_arr;
  using _bounded_five_long_int_arr_type =
    rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other>;
  _bounded_five_long_int_arr_type bounded_five_long_int_arr;
  using _string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_t_type string_t;
  using _static_five_string_arr_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>;
  _static_five_string_arr_type static_five_string_arr;
  using _bounded_ten_char_string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bounded_ten_char_string_t_type bounded_ten_char_string_t;
  using _bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_five_string_arr_type bounded_five_string_arr;
  using _bounded_ten_char_unbounded_string_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_unbounded_string_arr_type bounded_ten_char_unbounded_string_arr;
  using _bounded_ten_char_bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_bounded_five_string_arr_type bounded_ten_char_bounded_five_string_arr;

  // setters for named parameter idiom
  Type & set__bool_t(
    const bool & _arg)
  {
    this->bool_t = _arg;
    return *this;
  }
  Type & set__byte_t(
    const unsigned char & _arg)
  {
    this->byte_t = _arg;
    return *this;
  }
  Type & set__char_t(
    const uint8_t & _arg)
  {
    this->char_t = _arg;
    return *this;
  }
  Type & set__float_t(
    const float & _arg)
  {
    this->float_t = _arg;
    return *this;
  }
  Type & set__double_t(
    const double & _arg)
  {
    this->double_t = _arg;
    return *this;
  }
  Type & set__octet_int_t(
    const int8_t & _arg)
  {
    this->octet_int_t = _arg;
    return *this;
  }
  Type & set__octet_uint_t(
    const uint8_t & _arg)
  {
    this->octet_uint_t = _arg;
    return *this;
  }
  Type & set__short_int_t(
    const int16_t & _arg)
  {
    this->short_int_t = _arg;
    return *this;
  }
  Type & set__short_uint_t(
    const uint16_t & _arg)
  {
    this->short_uint_t = _arg;
    return *this;
  }
  Type & set__long_int_t(
    const int32_t & _arg)
  {
    this->long_int_t = _arg;
    return *this;
  }
  Type & set__long_uint_t(
    const uint32_t & _arg)
  {
    this->long_uint_t = _arg;
    return *this;
  }
  Type & set__long_long_int_t(
    const int64_t & _arg)
  {
    this->long_long_int_t = _arg;
    return *this;
  }
  Type & set__long_long_uint_t(
    const uint64_t & _arg)
  {
    this->long_long_uint_t = _arg;
    return *this;
  }
  Type & set__unbounded_long_int_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->unbounded_long_int_arr = _arg;
    return *this;
  }
  Type & set__static_five_long_int_arr(
    const std::array<int32_t, 5> & _arg)
  {
    this->static_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__bounded_five_long_int_arr(
    const rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->bounded_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_t = _arg;
    return *this;
  }
  Type & set__static_five_string_arr(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5> & _arg)
  {
    this->static_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bounded_ten_char_string_t = _arg;
    return *this;
  }
  Type & set__bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_unbounded_string_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_unbounded_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_bounded_five_string_arr = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CONSTANT_STRING_FIRST;

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_Goal
    std::shared_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_Goal
    std::shared_ptr<interfaces::action::ActionCollection_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_Goal_ & other) const
  {
    if (this->bool_t != other.bool_t) {
      return false;
    }
    if (this->byte_t != other.byte_t) {
      return false;
    }
    if (this->char_t != other.char_t) {
      return false;
    }
    if (this->float_t != other.float_t) {
      return false;
    }
    if (this->double_t != other.double_t) {
      return false;
    }
    if (this->octet_int_t != other.octet_int_t) {
      return false;
    }
    if (this->octet_uint_t != other.octet_uint_t) {
      return false;
    }
    if (this->short_int_t != other.short_int_t) {
      return false;
    }
    if (this->short_uint_t != other.short_uint_t) {
      return false;
    }
    if (this->long_int_t != other.long_int_t) {
      return false;
    }
    if (this->long_uint_t != other.long_uint_t) {
      return false;
    }
    if (this->long_long_int_t != other.long_long_int_t) {
      return false;
    }
    if (this->long_long_uint_t != other.long_long_uint_t) {
      return false;
    }
    if (this->unbounded_long_int_arr != other.unbounded_long_int_arr) {
      return false;
    }
    if (this->static_five_long_int_arr != other.static_five_long_int_arr) {
      return false;
    }
    if (this->bounded_five_long_int_arr != other.bounded_five_long_int_arr) {
      return false;
    }
    if (this->string_t != other.string_t) {
      return false;
    }
    if (this->static_five_string_arr != other.static_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_string_t != other.bounded_ten_char_string_t) {
      return false;
    }
    if (this->bounded_five_string_arr != other.bounded_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_Goal_

// alias to use template instance with default allocator
using ActionCollection_Goal =
  interfaces::action::ActionCollection_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
ActionCollection_Goal_<ContainerAllocator>::CONSTANT_STRING_FIRST = "CONSTANT_STRING_FIRST";

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_Result __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_Result __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_Result_
{
  using Type = ActionCollection_Result_<ContainerAllocator>;

  explicit ActionCollection_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  explicit ActionCollection_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : static_five_long_int_arr(_alloc),
    string_t(_alloc),
    static_five_string_arr(_alloc),
    bounded_ten_char_string_t(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  // field types and members
  using _bool_t_type =
    bool;
  _bool_t_type bool_t;
  using _byte_t_type =
    unsigned char;
  _byte_t_type byte_t;
  using _char_t_type =
    uint8_t;
  _char_t_type char_t;
  using _float_t_type =
    float;
  _float_t_type float_t;
  using _double_t_type =
    double;
  _double_t_type double_t;
  using _octet_int_t_type =
    int8_t;
  _octet_int_t_type octet_int_t;
  using _octet_uint_t_type =
    uint8_t;
  _octet_uint_t_type octet_uint_t;
  using _short_int_t_type =
    int16_t;
  _short_int_t_type short_int_t;
  using _short_uint_t_type =
    uint16_t;
  _short_uint_t_type short_uint_t;
  using _long_int_t_type =
    int32_t;
  _long_int_t_type long_int_t;
  using _long_uint_t_type =
    uint32_t;
  _long_uint_t_type long_uint_t;
  using _long_long_int_t_type =
    int64_t;
  _long_long_int_t_type long_long_int_t;
  using _long_long_uint_t_type =
    uint64_t;
  _long_long_uint_t_type long_long_uint_t;
  using _unbounded_long_int_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _unbounded_long_int_arr_type unbounded_long_int_arr;
  using _static_five_long_int_arr_type =
    std::array<int32_t, 5>;
  _static_five_long_int_arr_type static_five_long_int_arr;
  using _bounded_five_long_int_arr_type =
    rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other>;
  _bounded_five_long_int_arr_type bounded_five_long_int_arr;
  using _string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_t_type string_t;
  using _static_five_string_arr_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>;
  _static_five_string_arr_type static_five_string_arr;
  using _bounded_ten_char_string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bounded_ten_char_string_t_type bounded_ten_char_string_t;
  using _bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_five_string_arr_type bounded_five_string_arr;
  using _bounded_ten_char_unbounded_string_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_unbounded_string_arr_type bounded_ten_char_unbounded_string_arr;
  using _bounded_ten_char_bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_bounded_five_string_arr_type bounded_ten_char_bounded_five_string_arr;

  // setters for named parameter idiom
  Type & set__bool_t(
    const bool & _arg)
  {
    this->bool_t = _arg;
    return *this;
  }
  Type & set__byte_t(
    const unsigned char & _arg)
  {
    this->byte_t = _arg;
    return *this;
  }
  Type & set__char_t(
    const uint8_t & _arg)
  {
    this->char_t = _arg;
    return *this;
  }
  Type & set__float_t(
    const float & _arg)
  {
    this->float_t = _arg;
    return *this;
  }
  Type & set__double_t(
    const double & _arg)
  {
    this->double_t = _arg;
    return *this;
  }
  Type & set__octet_int_t(
    const int8_t & _arg)
  {
    this->octet_int_t = _arg;
    return *this;
  }
  Type & set__octet_uint_t(
    const uint8_t & _arg)
  {
    this->octet_uint_t = _arg;
    return *this;
  }
  Type & set__short_int_t(
    const int16_t & _arg)
  {
    this->short_int_t = _arg;
    return *this;
  }
  Type & set__short_uint_t(
    const uint16_t & _arg)
  {
    this->short_uint_t = _arg;
    return *this;
  }
  Type & set__long_int_t(
    const int32_t & _arg)
  {
    this->long_int_t = _arg;
    return *this;
  }
  Type & set__long_uint_t(
    const uint32_t & _arg)
  {
    this->long_uint_t = _arg;
    return *this;
  }
  Type & set__long_long_int_t(
    const int64_t & _arg)
  {
    this->long_long_int_t = _arg;
    return *this;
  }
  Type & set__long_long_uint_t(
    const uint64_t & _arg)
  {
    this->long_long_uint_t = _arg;
    return *this;
  }
  Type & set__unbounded_long_int_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->unbounded_long_int_arr = _arg;
    return *this;
  }
  Type & set__static_five_long_int_arr(
    const std::array<int32_t, 5> & _arg)
  {
    this->static_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__bounded_five_long_int_arr(
    const rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->bounded_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_t = _arg;
    return *this;
  }
  Type & set__static_five_string_arr(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5> & _arg)
  {
    this->static_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bounded_ten_char_string_t = _arg;
    return *this;
  }
  Type & set__bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_unbounded_string_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_unbounded_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_bounded_five_string_arr = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CONSTANT_STRING_SECOND;

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_Result
    std::shared_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_Result
    std::shared_ptr<interfaces::action::ActionCollection_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_Result_ & other) const
  {
    if (this->bool_t != other.bool_t) {
      return false;
    }
    if (this->byte_t != other.byte_t) {
      return false;
    }
    if (this->char_t != other.char_t) {
      return false;
    }
    if (this->float_t != other.float_t) {
      return false;
    }
    if (this->double_t != other.double_t) {
      return false;
    }
    if (this->octet_int_t != other.octet_int_t) {
      return false;
    }
    if (this->octet_uint_t != other.octet_uint_t) {
      return false;
    }
    if (this->short_int_t != other.short_int_t) {
      return false;
    }
    if (this->short_uint_t != other.short_uint_t) {
      return false;
    }
    if (this->long_int_t != other.long_int_t) {
      return false;
    }
    if (this->long_uint_t != other.long_uint_t) {
      return false;
    }
    if (this->long_long_int_t != other.long_long_int_t) {
      return false;
    }
    if (this->long_long_uint_t != other.long_long_uint_t) {
      return false;
    }
    if (this->unbounded_long_int_arr != other.unbounded_long_int_arr) {
      return false;
    }
    if (this->static_five_long_int_arr != other.static_five_long_int_arr) {
      return false;
    }
    if (this->bounded_five_long_int_arr != other.bounded_five_long_int_arr) {
      return false;
    }
    if (this->string_t != other.string_t) {
      return false;
    }
    if (this->static_five_string_arr != other.static_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_string_t != other.bounded_ten_char_string_t) {
      return false;
    }
    if (this->bounded_five_string_arr != other.bounded_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_Result_

// alias to use template instance with default allocator
using ActionCollection_Result =
  interfaces::action::ActionCollection_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
ActionCollection_Result_<ContainerAllocator>::CONSTANT_STRING_SECOND = "CONSTANT_STRING_SECOND";

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_Feedback __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_Feedback_
{
  using Type = ActionCollection_Feedback_<ContainerAllocator>;

  explicit ActionCollection_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  explicit ActionCollection_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : static_five_long_int_arr(_alloc),
    string_t(_alloc),
    static_five_string_arr(_alloc),
    bounded_ten_char_string_t(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  // field types and members
  using _bool_t_type =
    bool;
  _bool_t_type bool_t;
  using _byte_t_type =
    unsigned char;
  _byte_t_type byte_t;
  using _char_t_type =
    uint8_t;
  _char_t_type char_t;
  using _float_t_type =
    float;
  _float_t_type float_t;
  using _double_t_type =
    double;
  _double_t_type double_t;
  using _octet_int_t_type =
    int8_t;
  _octet_int_t_type octet_int_t;
  using _octet_uint_t_type =
    uint8_t;
  _octet_uint_t_type octet_uint_t;
  using _short_int_t_type =
    int16_t;
  _short_int_t_type short_int_t;
  using _short_uint_t_type =
    uint16_t;
  _short_uint_t_type short_uint_t;
  using _long_int_t_type =
    int32_t;
  _long_int_t_type long_int_t;
  using _long_uint_t_type =
    uint32_t;
  _long_uint_t_type long_uint_t;
  using _long_long_int_t_type =
    int64_t;
  _long_long_int_t_type long_long_int_t;
  using _long_long_uint_t_type =
    uint64_t;
  _long_long_uint_t_type long_long_uint_t;
  using _unbounded_long_int_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _unbounded_long_int_arr_type unbounded_long_int_arr;
  using _static_five_long_int_arr_type =
    std::array<int32_t, 5>;
  _static_five_long_int_arr_type static_five_long_int_arr;
  using _bounded_five_long_int_arr_type =
    rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other>;
  _bounded_five_long_int_arr_type bounded_five_long_int_arr;
  using _string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_t_type string_t;
  using _static_five_string_arr_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>;
  _static_five_string_arr_type static_five_string_arr;
  using _bounded_ten_char_string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bounded_ten_char_string_t_type bounded_ten_char_string_t;
  using _bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_five_string_arr_type bounded_five_string_arr;
  using _bounded_ten_char_unbounded_string_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_unbounded_string_arr_type bounded_ten_char_unbounded_string_arr;
  using _bounded_ten_char_bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_bounded_five_string_arr_type bounded_ten_char_bounded_five_string_arr;

  // setters for named parameter idiom
  Type & set__bool_t(
    const bool & _arg)
  {
    this->bool_t = _arg;
    return *this;
  }
  Type & set__byte_t(
    const unsigned char & _arg)
  {
    this->byte_t = _arg;
    return *this;
  }
  Type & set__char_t(
    const uint8_t & _arg)
  {
    this->char_t = _arg;
    return *this;
  }
  Type & set__float_t(
    const float & _arg)
  {
    this->float_t = _arg;
    return *this;
  }
  Type & set__double_t(
    const double & _arg)
  {
    this->double_t = _arg;
    return *this;
  }
  Type & set__octet_int_t(
    const int8_t & _arg)
  {
    this->octet_int_t = _arg;
    return *this;
  }
  Type & set__octet_uint_t(
    const uint8_t & _arg)
  {
    this->octet_uint_t = _arg;
    return *this;
  }
  Type & set__short_int_t(
    const int16_t & _arg)
  {
    this->short_int_t = _arg;
    return *this;
  }
  Type & set__short_uint_t(
    const uint16_t & _arg)
  {
    this->short_uint_t = _arg;
    return *this;
  }
  Type & set__long_int_t(
    const int32_t & _arg)
  {
    this->long_int_t = _arg;
    return *this;
  }
  Type & set__long_uint_t(
    const uint32_t & _arg)
  {
    this->long_uint_t = _arg;
    return *this;
  }
  Type & set__long_long_int_t(
    const int64_t & _arg)
  {
    this->long_long_int_t = _arg;
    return *this;
  }
  Type & set__long_long_uint_t(
    const uint64_t & _arg)
  {
    this->long_long_uint_t = _arg;
    return *this;
  }
  Type & set__unbounded_long_int_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->unbounded_long_int_arr = _arg;
    return *this;
  }
  Type & set__static_five_long_int_arr(
    const std::array<int32_t, 5> & _arg)
  {
    this->static_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__bounded_five_long_int_arr(
    const rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->bounded_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_t = _arg;
    return *this;
  }
  Type & set__static_five_string_arr(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5> & _arg)
  {
    this->static_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bounded_ten_char_string_t = _arg;
    return *this;
  }
  Type & set__bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_unbounded_string_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_unbounded_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_bounded_five_string_arr = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CONSTANT_STRING_THIRD;

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_Feedback
    std::shared_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_Feedback
    std::shared_ptr<interfaces::action::ActionCollection_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_Feedback_ & other) const
  {
    if (this->bool_t != other.bool_t) {
      return false;
    }
    if (this->byte_t != other.byte_t) {
      return false;
    }
    if (this->char_t != other.char_t) {
      return false;
    }
    if (this->float_t != other.float_t) {
      return false;
    }
    if (this->double_t != other.double_t) {
      return false;
    }
    if (this->octet_int_t != other.octet_int_t) {
      return false;
    }
    if (this->octet_uint_t != other.octet_uint_t) {
      return false;
    }
    if (this->short_int_t != other.short_int_t) {
      return false;
    }
    if (this->short_uint_t != other.short_uint_t) {
      return false;
    }
    if (this->long_int_t != other.long_int_t) {
      return false;
    }
    if (this->long_uint_t != other.long_uint_t) {
      return false;
    }
    if (this->long_long_int_t != other.long_long_int_t) {
      return false;
    }
    if (this->long_long_uint_t != other.long_long_uint_t) {
      return false;
    }
    if (this->unbounded_long_int_arr != other.unbounded_long_int_arr) {
      return false;
    }
    if (this->static_five_long_int_arr != other.static_five_long_int_arr) {
      return false;
    }
    if (this->bounded_five_long_int_arr != other.bounded_five_long_int_arr) {
      return false;
    }
    if (this->string_t != other.string_t) {
      return false;
    }
    if (this->static_five_string_arr != other.static_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_string_t != other.bounded_ten_char_string_t) {
      return false;
    }
    if (this->bounded_five_string_arr != other.bounded_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_Feedback_

// alias to use template instance with default allocator
using ActionCollection_Feedback =
  interfaces::action::ActionCollection_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
ActionCollection_Feedback_<ContainerAllocator>::CONSTANT_STRING_THIRD = "CONSTANT_STRING_THIRD";

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "interfaces/action/action_collection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_SendGoal_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_SendGoal_Request_
{
  using Type = ActionCollection_SendGoal_Request_<ContainerAllocator>;

  explicit ActionCollection_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActionCollection_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interfaces::action::ActionCollection_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interfaces::action::ActionCollection_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_SendGoal_Request
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_SendGoal_Request
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_SendGoal_Request_

// alias to use template instance with default allocator
using ActionCollection_SendGoal_Request =
  interfaces::action::ActionCollection_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_SendGoal_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_SendGoal_Response_
{
  using Type = ActionCollection_SendGoal_Response_<ContainerAllocator>;

  explicit ActionCollection_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActionCollection_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_SendGoal_Response
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_SendGoal_Response
    std::shared_ptr<interfaces::action::ActionCollection_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_SendGoal_Response_

// alias to use template instance with default allocator
using ActionCollection_SendGoal_Response =
  interfaces::action::ActionCollection_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActionCollection_SendGoal
{
  using Request = interfaces::action::ActionCollection_SendGoal_Request;
  using Response = interfaces::action::ActionCollection_SendGoal_Response;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_GetResult_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_GetResult_Request_
{
  using Type = ActionCollection_GetResult_Request_<ContainerAllocator>;

  explicit ActionCollection_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActionCollection_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_GetResult_Request
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_GetResult_Request
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_GetResult_Request_

// alias to use template instance with default allocator
using ActionCollection_GetResult_Request =
  interfaces::action::ActionCollection_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/action_collection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_GetResult_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_GetResult_Response_
{
  using Type = ActionCollection_GetResult_Response_<ContainerAllocator>;

  explicit ActionCollection_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionCollection_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interfaces::action::ActionCollection_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interfaces::action::ActionCollection_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_GetResult_Response
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_GetResult_Response
    std::shared_ptr<interfaces::action::ActionCollection_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_GetResult_Response_

// alias to use template instance with default allocator
using ActionCollection_GetResult_Response =
  interfaces::action::ActionCollection_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActionCollection_GetResult
{
  using Request = interfaces::action::ActionCollection_GetResult_Request;
  using Response = interfaces::action::ActionCollection_GetResult_Response;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/action_collection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionCollection_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionCollection_FeedbackMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionCollection_FeedbackMessage_
{
  using Type = ActionCollection_FeedbackMessage_<ContainerAllocator>;

  explicit ActionCollection_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActionCollection_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interfaces::action::ActionCollection_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interfaces::action::ActionCollection_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionCollection_FeedbackMessage
    std::shared_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionCollection_FeedbackMessage
    std::shared_ptr<interfaces::action::ActionCollection_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionCollection_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionCollection_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionCollection_FeedbackMessage_

// alias to use template instance with default allocator
using ActionCollection_FeedbackMessage =
  interfaces::action::ActionCollection_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interfaces
{

namespace action
{

struct ActionCollection
{
  /// The goal message defined in the action definition.
  using Goal = interfaces::action::ActionCollection_Goal;
  /// The result message defined in the action definition.
  using Result = interfaces::action::ActionCollection_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interfaces::action::ActionCollection_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interfaces::action::ActionCollection_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interfaces::action::ActionCollection_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interfaces::action::ActionCollection_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActionCollection ActionCollection;

}  // namespace action

}  // namespace interfaces

#endif  // INTERFACES__ACTION__ACTION_COLLECTION__STRUCT_HPP_
