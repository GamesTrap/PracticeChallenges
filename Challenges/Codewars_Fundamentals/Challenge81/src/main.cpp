#include <cassert>
#include <cstdint>
#include <string>

std::string NumberToString(const int32_t num)
{
	return std::to_string(num);
}

int main()
{
	assert(NumberToString(1 + 2) == "3");
	assert(NumberToString(67) == "67");
	assert(NumberToString(-5) == "-5");
	
	return 0;
}