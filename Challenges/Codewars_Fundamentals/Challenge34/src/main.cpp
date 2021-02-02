#include <cassert>
#include <cstdint>
#include <vector>

std::vector<int32_t> Quadratic(const int32_t x1, const int32_t x2)
{
	std::vector<int32_t> ans(3);
	constexpr int32_t a = 1;
	ans[0] = a; //Hard coded
	ans[1] = -(x1 + x2);
	ans[2] = x1 * x2;
	
	return ans;
}

int main()
{
	const std::vector<int32_t> res1{ 1, -1, 0 };
	const std::vector<int32_t> res2{ 1, -2, 1 };
	const std::vector<int32_t> res3{ 1, 13, 36 };
	const std::vector<int32_t> res4{ 1, 9, 20 };
	const std::vector<int32_t> res5{ 1, 5, -36 };
	const std::vector<int32_t> res6{ 1, -1, -20 };
	
	assert(Quadratic(0, 1) == res1);
	assert(Quadratic(1, 1) == res2);
	assert(Quadratic(-4, -9) == res3);
	assert(Quadratic(-5, -4) == res4);
	assert(Quadratic(4, -9) == res5);
	assert(Quadratic(5, -4) == res6);
	
	return 0;
}