#include <cstdint>

/*constexpr uint64_t OverTheRoad(const uint64_t address, const uint64_t n)
{
	if(n % 2 == 0) //Even number
	{
		double row = (2 * n + 2 - address) / 2.0;
		return 1 + (row - 1) * 2;
	}

	//Odd number
	double row = (address + 1) / 2.0;
	return 2 * n - (row - 1) * 2;
}*/

constexpr uint64_t OverTheRoad(const uint64_t address, const uint64_t n)
{
	return n * 2 - address + 1;
}

int main()
{
	static_assert(OverTheRoad(1, 3) == 6);
    static_assert(OverTheRoad(3, 3) == 4);
    static_assert(OverTheRoad(2, 3) == 5);
    static_assert(OverTheRoad(3, 5) == 8);
    static_assert(OverTheRoad(7, 11) == 16);
    static_assert(OverTheRoad(23633656673, 310027696726) == 596421736780);

	return 0;
}