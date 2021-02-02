#include <cstdint>

constexpr int32_t Multiply(const int32_t x, const int32_t y)
{
	return x * y;
}

int main()
{
	static_assert(Multiply(2, 2) == 4);
	static_assert(Multiply(4, 5) == 20);
	static_assert(Multiply(10, 100) == 1000);
	
	return 0;
}