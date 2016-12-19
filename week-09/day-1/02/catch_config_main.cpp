#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "apple.h"

TEST_CASE( "Apple" ) {
    Apple apple;
    std::vector<int> elements1 = {1, 1, 1, 1, 1};
    std::vector<int> elements2 = {0, -1, 1, 0, 0};
    std::vector<int> elements3;
    std::vector<int> elements4 = {2};
    REQUIRE( apple.sum(elements1) == 5 );
    REQUIRE( apple.sum(elements2) == 0 );
    REQUIRE( apple.sum(elements3) == 0 );
    REQUIRE( apple.sum(elements4) == 2 );
}