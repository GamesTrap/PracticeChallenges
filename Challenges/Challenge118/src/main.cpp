#include <cstdint>

constexpr int32_t CountSquares(const int32_t cuts)
{
	return cuts ? 2 * (3 * cuts * cuts + 1): 1;
}

int main()
{
	static_assert(CountSquares(2) == 26);
	static_assert(CountSquares(0) == 1);
	static_assert(CountSquares(5) == 152);
	static_assert(CountSquares(16) == 1538);
	static_assert(CountSquares(23) == 3176);
	
	return 0;
}