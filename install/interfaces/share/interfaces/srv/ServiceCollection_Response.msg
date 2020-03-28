

# Response section has data fields that are sent to client after service process.
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

# constant data (cannot be redeclared at response section)
string CONSTANT_STRING_SECOND = "CONSTANT_STRING_SECOND"

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
