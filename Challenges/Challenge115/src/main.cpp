#include <cstdint>

constexpr uint32_t SeatsInTheater(const int32_t totalCol, const int32_t totalRow, const int32_t col, const int32_t row)
{
	return (totalCol - col + 1) * (totalRow - row);
}

int main()
{
	static_assert(SeatsInTheater(16, 11, 5, 3) == 96);
	static_assert(SeatsInTheater(1, 1, 1, 1) == 0);
	static_assert(SeatsInTheater(13, 6, 8, 3) == 18);
	static_assert(SeatsInTheater(60, 100, 60, 1) == 99);
	static_assert(SeatsInTheater(1000, 1000, 1000, 1000) == 0);
	
	return 0;
}