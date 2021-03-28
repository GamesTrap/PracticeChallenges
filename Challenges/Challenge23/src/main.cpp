#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t SquareSum(const std::vector<int32_t>& nums)
{
	return std::accumulate(nums.cbegin(), nums.cend(), 0, [](const int32_t a, const int32_t b) {return a + b * b; });
}

int main()
{
	assert(SquareSum({ 1, 2 }) == 5);
	assert(SquareSum({ 0, 3, 4, 5 }) == 50);

	return 0;
}