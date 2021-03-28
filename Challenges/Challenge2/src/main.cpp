#include <cassert>
#include <string>
#include <vector>
#include <algorithm>

//Own way
/*
uint64_t CountSheep(const std::vector<bool>& arr)
{
	uint32_t count = 0;
	for (const bool b : arr)
	{
		if (b)
			count++;
	}

	return count;
}
*/

//STL
uint64_t CountSheep(const std::vector<bool>& arr)
{
	return std::count(arr.cbegin(), arr.cend(), true);
}

int main()
{
	const std::vector<bool> arr =
	{
		true, true, true, false,
		true, true, true, true,
		true, false, true, false,
		true, false, false, true,
		true, true, true, true,
		false, false, true, true
	};
	assert(CountSheep(arr) == 17);

	return 0;
}