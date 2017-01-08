#include <vector>
#include <iostream>

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "RandomNumber.h"

TEST_CASE( "Size of RandomNumber" ) {
    RandomNumber rn;
    rn.generate_random_number();
    std::string result = rn.get_random_number();

    REQUIRE( result.size() == 4  );
    REQUIRE_FALSE( result.size() == 0 );
}
/* Cannot be used with the game, just used it to see whether numbers are filled into the string
TEST_CASE( "Filling RandomNumber string" ) {
    RandomNumber rn;
    rn.generate_random_number();
    std::string result = rn.get_random_number();

    REQUIRE( result == "1234"  );
    REQUIRE_FALSE( result == "0000" );
}
 */