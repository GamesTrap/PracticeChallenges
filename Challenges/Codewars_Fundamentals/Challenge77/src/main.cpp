#include <algorithm>
#include <cassert>
#include <cstdint>
#include <vector>

int32_t FindSmallest(const std::vector<int32_t>& list)
{
	return *std::min_element(list.cbegin(), list.cend());
}

int main()
{
	assert(FindSmallest({ 3, 5, 2 }) == 2);
	assert(FindSmallest({ 7, 4, 6, 8 }) == 4);
	assert(FindSmallest({ 17, 21, 15, 36, 96 }) == 15);
	assert(FindSmallest({ 3, 9, 13, 10, 5, 3, 9, 5 }) == 3);
	
	assert(FindSmallest({ -12, -52, -27}) == -52);
	assert(FindSmallest({ -3, -27, -4, -2, -27, -2 }) == -27);
	assert(FindSmallest({ -16, -37, -8, -46, -29}) == -46);
	assert(FindSmallest({ -14, -102, -96, -36, -46, -15, -44 }) == -102);
	
	assert(FindSmallest({ 12, 0, -27 }) == -27);
	assert(FindSmallest({ -13, -50, 57, 13, 67, -13, 57, 108, 67 }) == -50);
	assert(FindSmallest({ -23, 12, 0, -47, -3, 24 }) == -47);
	
	return 0;
}