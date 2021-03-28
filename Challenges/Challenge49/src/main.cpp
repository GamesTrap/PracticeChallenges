#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

bool BetterThanAverage(const std::vector<int32_t>& classPoints, const int32_t yourPoints)
{
	return yourPoints > std::accumulate(classPoints.begin(), classPoints.end(), 0) / classPoints.size();
}

int main()
{
	assert(BetterThanAverage({ 2, 3 }, 5) == true);
	assert(BetterThanAverage({ 100, 40, 34, 57, 29, 72, 57, 88 }, 75) == true);
	assert(BetterThanAverage({ 12, 23, 34, 45, 56, 67, 78, 89, 90 }, 69) == true);
	
	return 0;
}