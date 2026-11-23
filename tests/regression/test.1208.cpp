#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

TEST_CASE("loop generated subcases remain practical at scale") {
    constexpr int N = 512;
    for (int i = 0; i < N; ++i) {
        SUBCASE(doctest::toString(i).c_str()) {
            CHECK(i >= 0);
        }
    }
}
