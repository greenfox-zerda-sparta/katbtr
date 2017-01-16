#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "NumberConvert.h"


TEST_CASE("arabic_to_roman(number) returns number*I if number < 4") {
  REQUIRE(arabic_to_roman(1) == "I");
  REQUIRE(arabic_to_roman(2) == "II");
  REQUIRE(arabic_to_roman(3) == "III");
}

TEST_CASE("arabic_to_roman() returns IV to number 4") {
  REQUIRE(arabic_to_roman(4) == "IV");
}