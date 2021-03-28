#include <cassert>
#include <cstdint>
#include <string>

int32_t StringToNumber(const std::string& s)
{
	return std::stoi(s);
}

int main()
{
	assert(StringToNumber("123456") == 123456);
	assert(StringToNumber("352605") == 352605);
	assert(StringToNumber("-321405") == -321405);
	assert(StringToNumber("-7") == -7);
	assert(StringToNumber("0") == 0);
	assert(StringToNumber("-0") == 0);
	
	return 0;
}