#include <cstdint>

constexpr int32_t SimpleMultiplication(const int32_t a)
{
	return a % 2 ? a * 9 : a * 8;
}

int main()
{
	static_assert(SimpleMultiplication(2) == 16);
	static_assert(SimpleMultiplication(1) == 9);
	static_assert(SimpleMultiplication(8) == 64);
	static_assert(SimpleMultiplication(4) == 32);
	static_assert(SimpleMultiplication(5) == 45);
	
	return 0;
}