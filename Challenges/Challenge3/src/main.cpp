#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

bool XO(const std::string& str)
{
	const int32_t x = std::count_if(str.cbegin(), str.cend(), [](const char c) {return c == 'x' || c == 'X'; });
	const int32_t o = std::count_if(str.cbegin(), str.cend(), [](const char c) {return c == 'o' || c == 'O'; });

	return x - o == 0 ? true : false;
}

int main()
{
	assert(XO("ooxx") == true);
	assert(XO("xooxx") == false);
	assert(XO("ooxXm") == true);
	assert(XO("zpzpzpp") == true);
	assert(XO("zzoo") == false);

	return 0;
}