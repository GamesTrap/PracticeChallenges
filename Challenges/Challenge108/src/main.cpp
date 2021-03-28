#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

int32_t GetAverage(const std::vector<int32_t>& marks)
{
	return std::accumulate(marks.begin(), marks.end(), 0) / marks.size();
}

int main()
{
	assert(GetAverage({ 2, 2, 2, 2 }) == 2);
	assert(GetAverage({ 1, 5, 87, 45, 8, 8 }) == 25);
	assert(GetAverage({ 2, 5, 13, 20, 16, 16, 10 }) == 11);
	assert(GetAverage({ 1, 2, 15, 15, 17, 11, 12, 17, 17, 14, 13, 15, 6, 11, 8, 7 }) == 11);
	
	return 0;
}