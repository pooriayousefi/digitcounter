export module digitcounter;

import <concepts>;
import <cstdlib>;

// digit counter function
export template<std::integral T> std::size_t how_many_digits_does_this_integer_have(T value)
{
	std::size_t counter{ 0 };
	auto dividend = value;
	if (dividend < static_cast<T>(0))
		dividend *= static_cast<T>(-1);
	const auto divisor = static_cast<T>(10);	
	while (dividend >= divisor)
	{
		dividend = dividend / divisor;
		counter++;
	}
	counter++;
	return counter;
}
