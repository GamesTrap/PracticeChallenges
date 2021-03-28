#include <cstdint>

constexpr int32_t Move(const int32_t position, const int32_t roll)
{
	return position + roll * 2;
}

int main()
{
	static_assert(Move(0, 4) == 8);
	static_assert(Move(3, 6) == 15);
	static_assert(Move(2, 5) == 12);
	
	return 0;
}