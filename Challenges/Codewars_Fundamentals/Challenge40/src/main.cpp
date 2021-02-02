#include <cassert>
#include <cstdint>
#include <array>
#include <string>

uint32_t Points(const std::array<std::string, 10>& games)
{
	uint32_t points = 0;
	for(const std::string& str : games)
	{
		const uint32_t left = str[0], right = str[2];
		if (left > right)
			points += 3;
		else if (left == right)
			++points;
	}

	return points;
}

int main()
{
	assert(Points({ "1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3" }) == 30);
	assert(Points({ "1:1", "2:2", "3:3", "4:4", "2:2", "3:3", "4:4", "3:3", "4:4", "4:4" }) == 10);
	assert(Points({ "0:1", "0:2", "0:3", "0:4", "1:2", "1:3", "1:4", "2:3", "2:4", "3:4" }) == 0);
	assert(Points({ "1:0", "2:0", "3:0", "4:0", "2:1", "1:3", "1:4", "2:3", "2:4", "3:4" }) == 15);
	assert(Points({ "1:0", "2:0", "3:0", "4:4", "2:2", "3:3", "1:4", "2:3", "2:4", "3:4" }) == 12);
	
	return 0;
}