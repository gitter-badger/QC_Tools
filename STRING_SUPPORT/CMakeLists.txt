#set(STRING_SUPPORT_SRC string_support.cpp)
project(STRING_SUPPORT)
add_library(STRING_SUPPORT_SRC string_support.cpp )

add_executable(test_string_support test_string_support.cpp)
target_link_libraries(test_string_support STRING_SUPPORT_SRC)
add_test(test_string_support test_string_support)
