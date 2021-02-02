#include <cstdint>

constexpr bool ZeroFuel(const uint32_t distanceToPump, const uint32_t mpg, const uint32_t fuelLeft)
{
	return mpg * fuelLeft >= distanceToPump;
}

int main()
{
	static_assert(ZeroFuel(50, 25, 2) == true);
	static_assert(ZeroFuel(100, 50, 1) == false);
	
	return 0;
}