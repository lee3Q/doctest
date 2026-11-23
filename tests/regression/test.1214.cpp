#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <stdexcept>

#include "doctest/doctest.h"

TEST_CASE("WASI targets with WebAssembly exception handling keep exceptions enabled") {
    CHECK_THROWS_AS(throw std::logic_error("expected"), std::logic_error);
}
