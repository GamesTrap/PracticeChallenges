#include <cassert>
#include <cstdint>
#include <vector>

std::vector<int32_t> CreateVector(const int32_t n)
{
	std::vector<int32_t> res;

	for (uint32_t i = 1; i <= n; ++i)
		res.push_back(i);

	return res;
}

int main()
{
	const std::vector<int32_t> res1{ 1 };
	assert(CreateVector(1) == res1);
	const std::vector<int32_t> res2{ 1, 2 };
	assert(CreateVector(2) == res2);
	const std::vector<int32_t> res3{ 1, 2, 3 };
	assert(CreateVector(3) == res3);
	const std::vector<int32_t> res4{ 1, 2, 3, 4 };
	assert(CreateVector(4) == res4);
	const std::vector<int32_t> res5{ 1, 2, 3, 4, 5 };
	assert(CreateVector(5) == res5);
	
	return 0;
}