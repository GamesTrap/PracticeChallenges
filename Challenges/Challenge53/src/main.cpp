#include <cassert>
#include <cstdint>
#include <vector>
#include <string>

std::vector<int32_t> Digitize(uint64_t n)
{
	std::vector<int32_t> ans;
	while(n > 0)
	{
		ans.push_back(n % 10);
		n /= 10;
	}

	return ans;
}

int main()
{
	const std::vector<int32_t> res{1, 3, 2, 5, 3};
	assert(Digitize(35231) == res);
	
	return 0;
}