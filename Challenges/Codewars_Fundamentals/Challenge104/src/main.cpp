#include <algorithm>
#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t Sum(const std::vector<int32_t>& numbers)
{
	if (numbers.size() <= 1)
		return 0;
	
	return std::accumulate(numbers.begin(), numbers.end(), 0) - 
		*std::min_element(numbers.begin(), numbers.end()) -
		*std::max_element(numbers.begin(), numbers.end());
}

int main()
{
	assert(Sum({ 6, 2, 1, 8, 10 }) == 16);
	assert(Sum({ 1, 1, 11, 2, 3 }) == 6);
	
	return 0;
}