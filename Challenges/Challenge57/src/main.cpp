#include <algorithm>
#include <cassert>
#include <cstdint>
#include <vector>

std::vector<int32_t> Maps(std::vector<int32_t> values)
{
	std::transform(values.begin(), values.end(), values.begin(), [](const int32_t i) {return i * 2; });
	return values;
}

int main()
{
	const std::vector<int32_t> res1{};
	assert(Maps({}) == res1);
	
	return 0;
}