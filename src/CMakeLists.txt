add_library(Common STATIC
  foo.cpp
)

target_include_directories(Common
  PRIVATE ${CMAKE_SOURCE_DIR}/include
)

add_executable(App
  main.cpp
)

set_target_properties(App PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

target_include_directories(App
  PRIVATE ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(App
  PRIVATE Common
)

target_compile_options(App PRIVATE
  $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
  $<$<CXX_COMPILER_ID:MSVC>:/W4>
)