#include <algorithm>
#include <cassert>
#include <cstdint>
#include <vector>

std::vector<int32_t> CountBy(const uint32_t x, const uint32_t n)
{
	std::vector<int32_t> ans(n, 0);
	for(uint32_t i = 0; i < ans.size(); ++i)
		ans[i] = x * (i + 1);
	
	return ans;
}

int main()
{
	const std::vector<int32_t> res1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	assert(CountBy(1, 10) == res1);
	const std::vector<int32_t> res2{2, 4, 6, 8, 10};
	assert(CountBy(2, 5) == res2);
	const std::vector<int32_t> res3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	assert(CountBy(1, 10) == res3);
	const std::vector<int32_t> res4{100, 200, 300, 400, 500};
	assert(CountBy(100, 5) == res4);
	
	return 0;
}