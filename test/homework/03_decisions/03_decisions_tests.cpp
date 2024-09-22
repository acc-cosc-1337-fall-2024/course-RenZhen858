#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"
using namespace std;

TEST_CASE("Test if else") 
{
	REQUIRE("grade A" == get_letter_grade_using_if(95));
	REQUIRE("grade B" == get_letter_grade_using_if(85));
	REQUIRE("grade C" == get_letter_grade_using_if(75));
	REQUIRE("grade D" == get_letter_grade_using_if(65));
	REQUIRE("grade F" == get_letter_grade_using_if(50));
}

TEST_CASE("Test switch")
{
	REQUIRE("grade A" == get_letter_grade_using_switch(95));
	REQUIRE("grade B" == get_letter_grade_using_switch(85));
	REQUIRE("grade C" == get_letter_grade_using_switch(75));
	REQUIRE("grade D" == get_letter_grade_using_switch(65));
	REQUIRE("grade F" == get_letter_grade_using_switch(50));
}
