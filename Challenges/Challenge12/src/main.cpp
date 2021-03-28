#include <cassert>
#include <cstdint>
#include <string>

std::string BooleanToString(const bool b)
{
	return b ? "true" : "false";
}

int main()
{
	assert(BooleanToString(true) == "true");
	assert(BooleanToString(false) == "false");
	assert(BooleanToString(false) == "false");
	assert(BooleanToString(true) == "true");
	
	return 0;
}