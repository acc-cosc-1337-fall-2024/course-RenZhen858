#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content")
{
	REQUIRE(0.375 == get_gc_content(AGCTATAG));
	REQUIRE(0.50 == get_gc_content(CGCTATAG));
}

TEST_CASE("Verify get_reverse_string")
{
	REQUIRE(GATATCGA == get_reverse_string(AGCTATAG));
	REQUIRE(GATATCGC == get_reverse_string(CGCTATAG));
}

TEST_CASE("Verify get_dna_complement")
{
	REQUIRE(ACCGGGTTTT == get_dna_complement(AAAACCCGGT));
	REQUIRE(ATTTTCCGGG == get_dna_complement(CCCGGAAAAT));
}