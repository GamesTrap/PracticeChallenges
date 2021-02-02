#include <cassert>
#include <cstdint>
#include <vector>

std::vector<uint32_t> HumanYearsCatYearsDogYears(const uint32_t humanYears)
{
	std::vector<uint32_t> ans(3);
	ans[0] = humanYears;

	if(humanYears >= 1)
	{
		ans[1] += 15;
		ans[2] += 15;
	}
	
	if(humanYears >= 2)
	{
		ans[1] += 9;
		ans[2] += 9;
	}

	for(uint32_t i = 2; i < humanYears; ++i)
	{
		ans[1] += 4;
		ans[2] += 5;
	}
	
	return ans;
}

int main()
{
	const std::vector<uint32_t> res1{ 1, 15, 15 };
	assert(HumanYearsCatYearsDogYears(1) == res1);
	const std::vector<uint32_t> res2{ 2, 24, 24 };
	assert(HumanYearsCatYearsDogYears(2) == res2);
	const std::vector<uint32_t> res3{ 10, 56, 64};
	assert(HumanYearsCatYearsDogYears(10) == res3);
	
	return 0;
}