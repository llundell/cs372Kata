/* 	StringCalc.cpp
		Header for stringCalc()
		Laura Lundell
		CS372 HW2
		February 25, 2019
		String Calculator Kata Practice
*/

#include <string>

int stringCalc(const std::string & num)
{
	// 1. An empty string returns zero
	if(num.empty())
	{
		return 0;
	}
	// 2. A single number returns the value
	else
	{
		return std::stoi(num);
	}
}
