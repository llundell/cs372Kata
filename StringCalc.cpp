/* 	StringCalc.cpp
		Header for stringCalc()
		Laura Lundell
		CS372 HW2
		February 25, 2019
		String Calculator Kata Practice
*/
// #define CATCH_CONFIG_MAIN
// #include "catch2.h"
// #include "StringCalc.h
#include <string>

int stringCalc(const std::string & num)
{
	// 1. An empty string returns zero
	if(num.empty())
	{
		return 0;
	}
	else
	{
		return std::stoi(num);
	}
}

#define CATCH_CONFIG_MAIN
#include "catch2.hh"

// 1. An empty string returns zero
TEST_CASE("Empty string returns 0")
{
  REQUIRE(stringCalc("") == 0);
}
TEST_CASE("A single number returns the value")
{
	REQUIRE(stringCalc("3") == 3);
}
