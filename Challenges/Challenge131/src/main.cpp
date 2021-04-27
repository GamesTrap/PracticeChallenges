#include <cstdint>

constexpr int64_t ReverseNumber(int64_t n)
{
	int64_t res = 0;

	while(n != 0)
	{
		res = res * 10 + n % 10;
		n /= 10;
	}

	return res;
}

int main()
{
	static_assert(ReverseNumber(123) == 321);
	static_assert(ReverseNumber(-123) == -321);
	static_assert(ReverseNumber(1000) == 1);
	static_assert(ReverseNumber(4321234) == 4321234);
	static_assert(ReverseNumber(5) == 5);
	static_assert(ReverseNumber(0) == 0);
	static_assert(ReverseNumber(-5) == -5);
	static_assert(ReverseNumber(98989898) == 89898989);
	static_assert(ReverseNumber(1234567890) == 987654321);
	static_assert(ReverseNumber(987654321) == 123456789);
	static_assert(ReverseNumber(-9876543210) == -123456789);

	return 0;
}