#include <cstdint>

constexpr bool Hero(const int32_t bullets, const int32_t dragons)
{
	return bullets / 2 >= dragons;
}

int main()
{
	static_assert(Hero(10, 5) == true);
	static_assert(Hero(7, 4) == false);
	static_assert(Hero(4, 5) == false);
	static_assert(Hero(100, 40) == true);
	static_assert(Hero(1500, 751) == false);
	static_assert(Hero(0, 1) == false);
	
	return 0;
}