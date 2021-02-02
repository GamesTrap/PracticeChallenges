#include <cassert>
#include <cstdint>
#include <string>

int32_t HexToDec(const std::string& hexString)
{
	return std::stoi(hexString, nullptr, 16);
}

int main()
{
	assert(HexToDec("1") == 1);
	assert(HexToDec("a") == 10);
	assert(HexToDec("10") == 16);
	assert(HexToDec("FF") == 255);
	assert(HexToDec("-C") == -12);
	
	return 0;
}