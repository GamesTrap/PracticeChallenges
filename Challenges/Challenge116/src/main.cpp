#include <cstdint>

constexpr uint32_t NthEven(const uint32_t n)
{
	return n * 2 - 2;
}

int main()
{
	static_assert(NthEven(1) == 0);
	static_assert(NthEven(2) == 2);
	static_assert(NthEven(3) == 4);
	static_assert(NthEven(6) == 10);
	static_assert(NthEven(101) == 200);
	static_assert(NthEven(201) == 400);
	static_assert(NthEven(1001) == 2000);
	
	return 0;
}