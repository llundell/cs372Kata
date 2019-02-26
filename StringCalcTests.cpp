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

// 1. An empty string returns zero
TEST_CASE("Empty string returns 0")
{
  REQUIRE(stringCalc("") == 0);
}

// 2. A single number returns the value
TEST_CASE("A single number returns the value")
{
	REQUIRE(stringCalc("3") == 3);
}
