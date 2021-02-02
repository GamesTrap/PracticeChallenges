#include <cassert>
#include <cstdint>
#include <vector>
#include <numeric>

std::vector<int32_t> MonkeyCount(const int32_t n)
{
	std::vector<int32_t> ans(n);
	std::iota(ans.begin(), ans.end(), 1);
	return ans;
}

int main()
{
	const std::vector<int32_t> res1{ 1, 2, 3, 4, 5 };
	assert(MonkeyCount(5) == res1);
	const std::vector<int32_t> res2{ 1, 2, 3 };
	assert(MonkeyCount(3) == res2);
	const std::vector<int32_t> res3{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	assert(MonkeyCount(9) == res3);
	const std::vector<int32_t> res4{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	assert(MonkeyCount(10) == res4);
	const std::vector<int32_t> res5{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	assert(MonkeyCount(20) == res5);
	
	return 0;
}