#include <cassert>
#include <cstdint>
#include <string>

std::string SliceString(const std::string& str)
{
	return std::string(str.begin() + 1, str.end() - 1);
}

int main()
{
	assert(SliceString("tuna") == "un");
	assert(SliceString("rats") == "at");
	assert(SliceString("code") == "od");
	
	assert(SliceString("country") == "ountr");
	assert(SliceString("place") == "lac");
	assert(SliceString("translation") == "ranslatio");
	
	return 0;
}