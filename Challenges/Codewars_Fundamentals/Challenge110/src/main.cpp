#include <cstdint>

constexpr bool IsDivisible(const int32_t n, const int32_t x, const int32_t y)
{
	return n % x == 0 && n % y == 0;
}

int main()
{
	static_assert(IsDivisible(3, 3, 4) == false);
	static_assert(IsDivisible(12, 3, 4) == true);
	static_assert(IsDivisible(8, 3, 4) == false);
	static_assert(IsDivisible(48, 3, 4) == true);
	static_assert(IsDivisible(100, 5, 10) == true);
	static_assert(IsDivisible(100, 5, 3) == false);
	static_assert(IsDivisible(4, 4, 2) == true);
	static_assert(IsDivisible(5, 2, 3) == false);
	static_assert(IsDivisible(17, 17, 17) == true);
	static_assert(IsDivisible(17, 1, 17) == true);
	
	return 0;
}