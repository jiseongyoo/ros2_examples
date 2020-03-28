# .msg file name should follow naming conventions
# 1. .msg file name must start with uppercase alphabet.
# 2. .msg file name must have only alphabets and numbers

# Fields name should follow naming conventions.
# 1. Field name must start with alphabet and not end with underscore.
# 2. Field name must have only lowercase alphabets and underscores.
# 3. Field name must not have consecutive underscores.
# 4. Constant field name must be uppercase alphabets.

# Format of field declaration
# typename <variable_name> <default_value>
# <default_value> is optional, but constant field must assign default value.

# singular data types
bool    bool_t
byte    byte_t
char    char_t
float32 float_t
float64 double_t
int8    octet_int_t
uint8   octet_uint_t
int16   short_int_t
uint16  short_uint_t
int32   long_int_t
uint32  long_uint_t
int64   long_long_int_t
uint64  long_long_uint_t

# constant data
string CONSTANT_STRING = "CONSTANT_STRING"

# array and bounded types
# [] unbounded, [N] static, [<=N] bounded
int32[] unbounded_long_int_arr
int32[5] static_five_long_int_arr
int32[<=5] bounded_five_long_int_arr

# string data types
# <=N bounded character, [N] static string array, [<=N] bounded string array
# <=N[] bounded character unbounded string array
# <=N[<=M] bounded character bounded string array
string          string_t
string[5]       static_five_string_arr
string<=10      bounded_ten_char_string_t
string[<=5]     bounded_five_string_arr
string<=10[]    bounded_ten_char_unbounded_string_arr
string<=10[<=5] bounded_ten_char_bounded_five_string_arr
