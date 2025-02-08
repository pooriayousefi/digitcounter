
#include <exception>
#include <iostream>
#include <concepts>

import digitcounter;

// entry point
int main()
{
	// digit counter unit test
	auto digitcounter_unit_test = []<std::integral T>(T value, std::size_t expected_result)
	{
		if (how_many_digits_does(value).have() == expected_result)
			return true;
		else
			return false;
	};
	try
	{
		std::cout
			<< "\nDoes 123 have 3 digits: " << (digitcounter_unit_test(123, 3) == true ? "true" : "false")
			<< "\nDoes 10 have 2 digits: " << (digitcounter_unit_test(10, 2) == true ? "true" : "false")
			<< "\nDoes 8 have 1 digits: " << (digitcounter_unit_test(8, 1) == true ? "true" : "false")
			<< "\nDoes 0 have 1 digits: " << (digitcounter_unit_test(0, 1) == true ? "true" : "false")
			<< "\nDoes -2405 have 4 digits: " << (digitcounter_unit_test(-2405, 4) == true ? "true" : "false")
			<< "\nDoes -100111000000000101LL have 18 digits: " << (digitcounter_unit_test(-100111000000000101LL, 18) == true ? "true" : "false")
			<< std::endl;
		return 0;
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
		return 1;
	}
}
