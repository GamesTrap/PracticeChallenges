#include <cstdint>

constexpr bool Divide(const uint32_t weight)
{
	return weight % 2 == 0 && weight != 2;
}

int main()
{
	static_assert(Divide(4) == true);
	static_assert(Divide(2) == false);
	static_assert(Divide(5) == false);
	static_assert(Divide(88) == true);
	static_assert(Divide(100) == true);
	static_assert(Divide(67) == false);
	static_assert(Divide(90) == true);
	static_assert(Divide(10) == true);
	static_assert(Divide(93) == false);
	static_assert(Divide(32) == true);
	
	return 0;
}