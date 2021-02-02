#include <cassert>
#include <cstdint>
#include <vector>

uint32_t Pairs(const std::vector<int32_t>& arr)
{
	uint32_t ans = 0;
	for(uint32_t i = 0; i < arr.size() - 1; i += 2)
	{
		if (arr[i] == arr[i + 1] + 1 || arr[i] == arr[i + 1] - 1)
			++ans;
	}

	return ans;
}

int main()
{
	assert(Pairs({ 1, 2, 5, 8, -4, -3, 7, 6, 5 }) == 3);
	assert(Pairs({ 21, 20, 22, 40, 39, -56, 30, -55, 95, 94 }) == 2);
	assert(Pairs({ 81, 44, 80, 26, 12, 27, -34, 37, -35 }) == 0);
	assert(Pairs({ -55, -56, -7, -6, 56, 55, 63, 62 }) == 4);
	assert(Pairs({ 73, 72, 8, 9, 73, 72 }) == 3);
	
	return 0;
}