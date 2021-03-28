#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t Grow(const std::vector<int32_t>& nums)
{
	return std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<>());
}

int main()
{
	assert(Grow({ 1, 2, 3 }) == 6);
	assert(Grow({ 4, 1, 1, 1, 4 }) == 16);
	assert(Grow({ 2, 2, 2, 2, 2, 2 }) == 64);
	
	return 0;
}