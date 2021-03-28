#include <cstdint>

constexpr bool CheckForFactor(const int32_t base, const int32_t factor)
{
	return base % factor == 0;
}

int main()
{
	static_assert(CheckForFactor(10, 2) == true);
	static_assert(CheckForFactor(63, 7) == true);
	static_assert(CheckForFactor(2450, 5) == true);
	static_assert(CheckForFactor(24612, 3) == true);
	
	static_assert(CheckForFactor(9, 2) == false);
	static_assert(CheckForFactor(653, 7) == false);
	static_assert(CheckForFactor(2453, 5) == false);
	static_assert(CheckForFactor(24617, 3) == false);
	
	return 0;
}