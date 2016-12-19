#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "wordtoolbox.h"

TEST_CASE( "Count How Many" ) {
    WordToolbox wordtoolbox1("Tarzan's toenails");
    WordToolbox wordtoolbox2("xxx");
    wordtoolbox2.set_string("Tarzan's toenails");
    WordToolbox wordtoolbox3("Me Tarzan, you Jane");

    REQUIRE( wordtoolbox1.countHowMany('a') == 3 );
    REQUIRE( wordtoolbox2.countHowMany('a') == 3 );
    REQUIRE( wordtoolbox3.countHowMany('e') == 2 );
}

TEST_CASE( "Is Anagram" ) {
    WordToolbox wordtoolbox1("aloft");
    WordToolbox wordtoolbox2("");

    REQUIRE( wordtoolbox1.isAnAnagram("LOFAT") );
    REQUIRE( ! wordtoolbox1.isAnAnagram("sandaMukiPufi") );
    REQUIRE( ! wordtoolbox2.isAnAnagram("mucika") );
    REQUIRE( wordtoolbox2.isAnAnagram("") );

    REQUIRE_FALSE( ! wordtoolbox1.isAnAnagram("lofat") );
    REQUIRE_FALSE( wordtoolbox1.isAnAnagram("sandamukipufi") );
    REQUIRE_FALSE( wordtoolbox2.isAnAnagram("muCika") );
    REQUIRE_FALSE( ! wordtoolbox2.isAnAnagram("") );

}

TEST_CASE( "To Lower" ) {
    WordToolbox wtb("xxx");

    REQUIRE( wtb.to_lower("MaciCukiNyuszi") == "macicukinyuszi");

}