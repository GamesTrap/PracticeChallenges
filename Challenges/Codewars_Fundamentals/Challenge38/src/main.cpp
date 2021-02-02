#include <algorithm>
#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

std::vector<int32_t> ReverseSeq(/*const*/ uint32_t n)
{
	std::vector<int32_t> ans(n);
	//std::generate(ans.begin(), ans.end(), [&]() {return n--; });
	std::iota(ans.rbegin(), ans.rend(), 1);
	return ans;
}

int main()
{
	const std::vector<int32_t> res1{ 1 };
	assert(ReverseSeq(1) == res1);
	const std::vector<int32_t> res2{ 2, 1 };
	assert(ReverseSeq(2) == res2);
	const std::vector<int32_t> res3{ 5, 4, 3, 2, 1 };
	assert(ReverseSeq(5) == res3);
	const std::vector<int32_t> res4{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	assert(ReverseSeq(10) == res4);
	
	return 0;
}