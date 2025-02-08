export module digitcounter;

import <concepts>;
import <cstdlib>;

// digit counter function
export template<std::integral T> std::size_t how_many_digits_does_this_integer_have(T value)
{
	std::size_t counter{ 0 };	
	auto dividend = std::abs(value);
	const auto divisor = static_cast<T>(10);	
	while (dividend >= divisor)
	{
		auto x = std::div(dividend, divisor);
		dividend = x.quot;
		counter++;
	}
	counter++;
	return counter;
}