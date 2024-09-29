#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify factorial")
{
	REQUIRE(6 == factorial(3));
	REQUIRE(5 == factorial(120));
	REQUIRE(6 == factorial(720));
}

TEST_CASE("Verify gcd")
{
	REQUIRE(5 == gcd(5, 15));
	REQUIRE(7 == gcd(21, 28));
	REQUIRE(25 == gcd(25, 100));
}