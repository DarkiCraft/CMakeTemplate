add_executable(Tests
  test_foo.cpp
)

target_link_libraries(Tests
  PRIVATE Common
  PRIVATE Catch2::Catch2WithMain
)

target_include_directories(Tests
  PRIVATE ${CMAKE_SOURCE_DIR}/include
)

include(CTest)
include(Catch)
catch_discover_tests(Tests)
