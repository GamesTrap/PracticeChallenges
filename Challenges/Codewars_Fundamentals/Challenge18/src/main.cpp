#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t Sum(const std::vector<int32_t>& nums)
{
	return std::accumulate(nums.cbegin(), nums.cend(), 0);
}

int main()
{
	assert(Sum({}) == 0);
	assert(Sum({ 5 }) == 5);
	assert(Sum({ -5 }) == -5);
	assert(Sum({ 1, 2, 3, 4 }) == 10);
	assert(Sum({ 1, 2, -3, 3, 4 }) == 7);
	
	return 0;
}