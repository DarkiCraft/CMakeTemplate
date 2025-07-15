#include <catch2/catch_all.hpp>
#include "foo.hpp"

TEST_CASE("`foo` does not throw") {
  REQUIRE_NOTHROW(Foo());
}