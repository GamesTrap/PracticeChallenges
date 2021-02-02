#include <cstdint>

constexpr int32_t DoubleInteger(const int32_t n)
{
	return n << 1;
}

int main()
{
	static_assert(DoubleInteger(1) == 2);
	static_assert(DoubleInteger(5) == 10);
	static_assert(DoubleInteger(10) == 20);
	static_assert(DoubleInteger(20) == 40);
	static_assert(DoubleInteger(40) == 80);
	
	return 0;
}