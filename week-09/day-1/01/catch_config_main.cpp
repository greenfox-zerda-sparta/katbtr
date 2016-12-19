#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "apple.h"

TEST_CASE( "Apple" ) {
    Apple apple;
    REQUIRE( apple.getApple() == "apple" );

}
