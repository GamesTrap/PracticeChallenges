#include <algorithm>
#include <cassert>
#include <cstdint>
#include <functional>
#include <vector>

std::vector<int32_t> Invert(const std::vector<int32_t>& values)
{
	std::vector<int32_t> res(values.size());
	std::transform(values.cbegin(), values.cend(), res.begin(), std::negate<>());

	return res;
}

int main()
{
	bool res = Invert({ 1, 2, 3, 4, 5 }) == std::vector<int32_t>{-1, -2, -3, -4, -5};
	assert(res);
	res = Invert({ 1, -2, 3, -4, 5 }) == std::vector<int32_t>{-1, 2, -3, 4, -5};
	assert(res);
	assert(Invert({}).empty());

	return 0;
}