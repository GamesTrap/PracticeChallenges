#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

std::vector<int32_t> Arr(const uint32_t n = 0)
{
	std::vector<int32_t> res(n);
	std::iota(res.begin(), res.end(), 0);

	return res;
}

int main()
{
	assert(Arr().empty());
	const std::vector<int32_t> test {0, 1, 2, 3};
	assert(Arr(4) == test);
	
	return 0;
}