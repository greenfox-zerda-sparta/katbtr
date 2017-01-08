#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Company.h"
#include "Developer.h"
#include "Recruiter.h"

TEST_CASE( "Get Best Employee's Name" ) {

    Employee* emp1 = new Employee("Bela", "Developer");
    Employee* emp2 = new Employee("Jeno", "Recruiter");

    emp1->work(30);
    emp2->work(10);

    REQUIRE( emp1->get_name() == "Bela" );
    REQUIRE_FALSE( emp1->get_name() == "Juliska" );

    Company comp;
    comp.add_employee(emp1);
    comp.add_employee(emp2);

    REQUIRE( comp.get_best_employees_name() == "Bela" );
    REQUIRE_FALSE( comp.get_best_employees_name() == "Jeno" );
}

TEST_CASE( "Company Status" ) {

    Developer* emp1 = new Developer("Bela");
    Recruiter* emp2 = new Recruiter("Jeno");
    emp1->work(30);
    emp2->work(10);
    Company comp;
    comp.add_employee(emp1);
    comp.add_employee(emp2);

    REQUIRE( comp.get_company_status() == "Balance: 5000\nEmployee Count: 2\n"
                                                  "Employees:\nName: Bela, Worked Hours: 30, Base Salary: 20\n"
                                                  "Name: Jeno, Worked Hours: 10, Base Salary: 15\n" );
    REQUIRE_FALSE( comp.get_company_status() == "Bizbasz" );
}

TEST_CASE( "Give bonus" ) {

    Developer* emp1 = new Developer("Bela");
    Recruiter* emp2 = new Recruiter("Jeno");
    emp1->work(130);
    emp2->work(10);
    Company comp;
    comp.add_employee(emp1);
    comp.add_employee(emp2);
    comp.give_bonuses();

    REQUIRE( comp.get_company_status() == "Balance: 5000\nEmployee Count: 2\n"
            "Employees:\nName: Bela, Worked Hours: 130, Base Salary: 25\n"
            "Name: Jeno, Worked Hours: 10, Base Salary: 15\n" );
    REQUIRE_FALSE( comp.get_company_status() == "Bizbasz" );
}