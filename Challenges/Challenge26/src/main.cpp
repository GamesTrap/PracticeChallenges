#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t ArrayPlusArray(const std::vector<int32_t>& a, const std::vector<int32_t>& b)
{
	return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}

int main()
{
	assert(ArrayPlusArray({ 1, 2, 3 }, { 4, 5, 6 }) == 21);
	assert(ArrayPlusArray({ 1, -2, -3 }, { 4, -5, 6 }) == 1);
	assert(ArrayPlusArray({ -1, -2, -3 }, { -4, -5, -6 }) == -21);
	assert(ArrayPlusArray({ 0, 0, 0 }, { 4, 5, 6 }) == 15);
	assert(ArrayPlusArray({ -1 }, { -1 }) == -2);
	
	return 0;
}