export module digitcounter;

import <concepts>;

// digit counter function
export template<std::integral T> struct how_many_digits_does
{
	// type definitions
	using value_type = T;

	// member
	value_type value;

	// default constructor
	how_many_digits_does() = delete;

	// constructor eith parameters
	how_many_digits_does(T v) :value{ v } {}

	// counter method
	constexpr std::size_t have()
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
};
