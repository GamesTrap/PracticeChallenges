#include <cstdint>
#include <vector>
#include <cassert>
#include <limits>
#include <numeric>
#include <algorithm>

/*int32_t AdjacentElementsProduct(const std::vector<int32_t>& inputArray)
{
	int32_t res = std::numeric_limits<int32_t>::min();

	for(uint32_t i = 0; i < inputArray.size() - 1; i++)
	{
		int32_t temp = inputArray[i] * inputArray[i + 1];

		if(temp > res)
			res = temp;
	}

	return res;
}*/

int32_t AdjacentElementsProduct(std::vector<int32_t> inputArray)
{
	std::adjacent_difference(inputArray.cbegin(), inputArray.cend(), inputArray.begin(), std::multiplies<int32_t>());
	return *std::max_element(std::next(inputArray.cbegin()), inputArray.cend());
}

int main()
{
	assert(AdjacentElementsProduct({5, 8}) == 40);
	assert(AdjacentElementsProduct({1, 2, 3}) == 6);
	assert(AdjacentElementsProduct({1, 5, 10, 9}) == 90);
	assert(AdjacentElementsProduct({5, 1, 2, 3, 1, 4}) == 6);
	assert(AdjacentElementsProduct({4, 12, 3, 1, 5}) == 48);

	assert(AdjacentElementsProduct({3, 6, -2, -5, 7, 3}) == 21);
	assert(AdjacentElementsProduct({9, 5, 10, 2, 24, -1, -48}) == 50);
	assert(AdjacentElementsProduct({5, 6, -4, 2, 3, 2, -23}) == 30);
	assert(AdjacentElementsProduct({-23, 4, -5, 99, -27, 329, -2, 7, -921}) == -14);

	assert(AdjacentElementsProduct({1, 0, 1, 0, 1000}) == 0);
	assert(AdjacentElementsProduct({1, 2, 3, 0}) == 6);

	return 0;
}