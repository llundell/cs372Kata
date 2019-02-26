/* 	StringCalcTests.cpp
		Tests for stringCalc()
		Laura Lundell
		CS372 HW2
		February 25, 2019
		String Calculator Kata Practice
*/

#define CATCH_CONFIG_MAIN

#include "catch2.hh"
#include "StringCalc.cpp"

TEST_CASE("1. Empty string returns 0")
{
  REQUIRE(stringCalc("") == 0);
}

TEST_CASE("2. A single number returns the value")
{
	REQUIRE(stringCalc("3") == 3);
	REQUIRE(stringCalc("100") == 100);
}

TEST_CASE("3. Two numbers, comma delimited, returns the sum")
{
	REQUIRE(stringCalc("3, 4") == 7);
	REQUIRE(stringCalc("5, 10") == 15);
}

TEST_CASE("4. Two numbers, newline delimited, returns the sum")
{
	REQUIRE(stringCalc("3\n4") == 7);
}
