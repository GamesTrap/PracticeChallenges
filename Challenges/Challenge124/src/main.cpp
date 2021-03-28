#include <cstdint>

/*constexpr uint32_t SumCubes(const uint32_t n)
{
	uint32_t res = 0;

	for(uint32_t i = 1; i <= n; ++i)
		res += i * i * i;

	return res;
}*/

constexpr uint32_t SumCubes(const uint32_t n)
{
	return (n * (n + 1) / 2) * (n * (n + 1) / 2);
}

int main()
{
	static_assert(SumCubes(1) == 1);
	static_assert(SumCubes(2) == 9);
	static_assert(SumCubes(3) == 36);
	static_assert(SumCubes(4) == 100);
	static_assert(SumCubes(10) == 3025);
	static_assert(SumCubes(123) == 58155876);

	return 0;
}