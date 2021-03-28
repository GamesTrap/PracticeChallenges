#include <cstdint>

constexpr int32_t Pillars(int32_t pillars, const int32_t distance, const int32_t width)
{
	if (pillars <= 1)
		return 0;

	const int32_t totalDistanceCentimeters = distance * 100 * --pillars;
	const int32_t totalWidth = width * --pillars;
	return totalDistanceCentimeters + totalWidth;
}

int main()
{
	static_assert(Pillars(1, 10, 10) == 0);
	static_assert(Pillars(2, 20, 25) == 2000);
	static_assert(Pillars(11, 15, 30) == 15270);
	
	return 0;
}