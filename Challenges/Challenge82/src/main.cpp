#include <cassert>
#include <cstdint>
#include <string>

std::string CountSheep(const int32_t number)
{
	std::string ans;
	for(uint32_t i = 1; i <= number; ++i)
		ans += std::to_string(i) + " sheep...";
	
	return ans;
}

int main()
{
	assert(CountSheep(1) == "1 sheep...");
	assert(CountSheep(2) == "1 sheep...2 sheep...");
	assert(CountSheep(3) == "1 sheep...2 sheep...3 sheep...");
	assert(CountSheep(4) == "1 sheep...2 sheep...3 sheep...4 sheep...");
	assert(CountSheep(5) == "1 sheep...2 sheep...3 sheep...4 sheep...5 sheep...");
	
	return 0;
}