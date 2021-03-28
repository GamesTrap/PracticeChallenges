#include <cassert>
#include <algorithm>
#include <cstdint>
#include <vector>

int32_t SumOfDifferences(const std::vector<int32_t>& arr)
{
	if (arr.empty())
		return 0;

	const auto p = std::minmax_element(arr.cbegin(), arr.cend());
	
	return *p.second - *p.first;
}

int main()
{
	assert(SumOfDifferences({ 1, 2, 10 }) == 9);
	assert(SumOfDifferences({ -3, -2, -1 }) == 2);
	assert(SumOfDifferences({ 1, 1, 1, 1 }) == 0);
	assert(SumOfDifferences({ -17, 17 }) == 34);
	assert(SumOfDifferences({}) == 0);
	assert(SumOfDifferences({ -1 }) == 0);
	assert(SumOfDifferences({ 1 }) == 0);
	
	return 0;
}