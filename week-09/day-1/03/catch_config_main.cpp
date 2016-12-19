#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fibonacci.h"

TEST_CASE( "Fibonacci" ) {
    Fibonacci fibonacci;

    REQUIRE( fibonacci.fib_method(0) == 0 );
    REQUIRE( fibonacci.fib_method(1) == 1 );
    REQUIRE( fibonacci.fib_method(2) == 1 );
    REQUIRE( fibonacci.fib_method(4) == 3 );

}