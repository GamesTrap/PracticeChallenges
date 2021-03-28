#include <cstdint>

constexpr uint32_t OddCount(const uint32_t n)
{
	return n / 2;
}

int main()
{
	static_assert(OddCount(15) == 7);
	static_assert(OddCount(15023) == 7511);
	
	return 0;
}