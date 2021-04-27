#include <string>
#include <algorithm>
#include <cassert>

std::string HighAndLow(std::string numbers)
{
	numbers.push_back(' ');
	std::vector<int32_t> nums{};

	std::size_t pos = 0;
	while((pos = numbers.find(' ')) != std::string::npos)
	{
		nums.push_back(std::stoi(numbers.substr(0, pos)));
		numbers.erase(0, pos + 1);
	}

	auto minmax = std::minmax_element(nums.cbegin(), nums.cend());

	return std::to_string(*minmax.second) + " " + std::to_string(*minmax.first);
}

int main()
{
	assert(HighAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") == "42 -9");

	return 0;
}