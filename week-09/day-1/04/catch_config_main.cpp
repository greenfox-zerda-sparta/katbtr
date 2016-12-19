#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "wordtoolbox.h"

TEST_CASE( "Count How Many" ) {
    WordToolbox wordtoolbox1("Tarzan's toenails");
    WordToolbox wordtoolbox2("xxx");
    wordtoolbox2.set_string("Tarzan's toenails");

    REQUIRE( wordtoolbox1.countHowMany('a') == 3 );
    REQUIRE( wordtoolbox2.countHowMany('a') == 3 );
}

TEST_CASE( "Is Anagram" ) {
    WordToolbox wordtoolbox1("aloft");
    WordToolbox wordtoolbox2("");
    WordToolbox wordtoolbox3("sörvérerezet");

    REQUIRE( wordtoolbox1.isAnAnagram("lofat") );
    REQUIRE( ! wordtoolbox1.isAnAnagram("sandamukipufi") );
    REQUIRE( ! wordtoolbox2.isAnAnagram("mucika") );
    REQUIRE( wordtoolbox2.isAnAnagram("") );
    REQUIRE( ! wordtoolbox3.isAnAnagram("deákferenctér") );
    REQUIRE( wordtoolbox3.isAnAnagram("örsvezértere") );
}