#include <cstdint>

constexpr uint32_t Summation(const uint32_t num)
{
	return num * (num + 1) / 2;
}

int main()
{
	static_assert(Summation(1) == 1);
	static_assert(Summation(8) == 36);
	
	return 0;
}