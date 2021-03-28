#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

uint32_t PositiveSum(const std::vector<int32_t>& arr)
{
	return std::accumulate(arr.cbegin(), arr.cend(), 0, [](const int32_t x, const int32_t y) {return y > 0 ? x + y : x; });
}

int main()
{
	assert(PositiveSum({ 1, 2, 3, 4, 5 }) == 15);
	assert(PositiveSum({ 1, -2, 3, 4, 5 }) == 13);
	assert(PositiveSum({ -1, 2, 3, 4, -5 }) == 9);
	assert(PositiveSum({}) == 0);
	assert(PositiveSum({-1, -2, -3, -4, -5}) == 0);

	return 0;
}