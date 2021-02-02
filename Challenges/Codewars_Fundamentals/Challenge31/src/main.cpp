#include <cstdint>

constexpr bool IsDivideBy(const int32_t number, const int32_t a, const int32_t b)
{
	return number % a == 0 && number % b == 0;
}

int main()
{
	static_assert(IsDivideBy(8, 2, 4) == true);
	static_assert(IsDivideBy(12, -3, 4) == true);
	static_assert(IsDivideBy(8, 3, 4) == false);
	static_assert(IsDivideBy(48, 2, -5) == false);
	static_assert(IsDivideBy(-100, -25, 10) == true);
	static_assert(IsDivideBy(10000, 5, -3) == false);
	static_assert(IsDivideBy(4, 4, 2) == true);
	static_assert(IsDivideBy(5, 2, 3) == false);
	static_assert(IsDivideBy(-96, 25, 17) == false);
	static_assert(IsDivideBy(33, 1, 33) == true);
	
	return 0;
}