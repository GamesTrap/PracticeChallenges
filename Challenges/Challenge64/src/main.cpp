#include <cassert>
#include <cstdint>
#include <algorithm>
#include <string>

std::string MakeUpperCase(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	return str;
}

int main()
{
	assert(MakeUpperCase("hello") == "HELLO");
	
	return 0;
}