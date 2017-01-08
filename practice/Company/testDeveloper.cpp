#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Developer.h"

TEST_CASE( "Name Developer" ) {
    Developer dev1("Mariska");

    REQUIRE( dev1.get_name() == "Mariska" );
    REQUIRE_FALSE( dev1.get_name() == "Juliska" );
}

TEST_CASE( "Give a raise" ) {
    Developer dev1;
    dev1.raise();

    REQUIRE( dev1.get_base_salary() == 25 );
    REQUIRE_FALSE( dev1.get_base_salary() == 12 );
}

TEST_CASE( "Work" ) {
    Developer dev1;
    dev1.work(8);

    REQUIRE( dev1.get_worked_hours() == 8 );
    REQUIRE_FALSE( dev1.get_worked_hours() == 12 );
}

TEST_CASE( "Pay" ) {
    Developer dev1;
    dev1.work(8);

    REQUIRE( dev1.get_worked_hours() == 8 );
    REQUIRE_FALSE( dev1.get_worked_hours() == 12 );
    REQUIRE( dev1.pay() == 160 );
    REQUIRE_FALSE( dev1.pay() == 120 );

 //   dev1.pay();

    REQUIRE( dev1.get_worked_hours() == 0 );
    REQUIRE_FALSE( dev1.get_worked_hours() == 12 );

}

TEST_CASE( "Get Status" ) {
    Developer dev1("Mariska");
    dev1.work(8);

    REQUIRE( dev1.get_status() == "Name: Mariska, Worked Hours: 8, Base Salary: 20" );
    REQUIRE_FALSE( dev1.get_status() == "Bizbasz" );
}