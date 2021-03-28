#include <algorithm>
#include <cassert>
#include <cstdint>
#include <vector>

int32_t Min(const std::vector<int32_t>& list)
{
	return *std::min_element(list.cbegin(), list.cend());
}

int32_t Max(const std::vector<int32_t>& list)
{
	return *std::max_element(list.cbegin(), list.cend());
}

int main()
{
	assert(Min({ -52, 56, 30, 29, -54, 0, -110 }) == -110);
	assert(Min({ 42, 54, 65, 87, 0 }) == 0);
	assert(Max({ 4, 6, 2, 1, 9, 63, -134, 566 }) == 566);
	assert(Max({ 5 }) == 5);
	
	return 0;
}