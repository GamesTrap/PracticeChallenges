#include <cassert>
#include <cstdint>
#include <vector>

std::vector<int32_t> CountPositivesSumNegatives(const std::vector<int32_t>& input)
{
	if (input.empty())
		return {};
	
	std::vector<int32_t> ans(2, 0);
	for(const int32_t n : input)
		n > 0 ? ans[0]++ : ans[1] += n;

	return ans;
}

int main()
{
	const std::vector<int32_t> res1{ 10, -65 };
	assert(CountPositivesSumNegatives({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15 }) == res1);
	const std::vector<int32_t> res2{ 8, -50 };
	assert(CountPositivesSumNegatives({ 0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14 }) == res2);
	
	return 0;
}