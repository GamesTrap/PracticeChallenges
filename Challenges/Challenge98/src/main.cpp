#include <bitset>
#include <cassert>
#include <cstdint>
#include <string>

std::string Evil(const int32_t n)
{
	return std::bitset<32>(n).count() & 1 ? "It's Odious!" : "It's Evil!";
}

int main()
{
	assert(Evil(1) == "It's Odious!");
	assert(Evil(2) == "It's Odious!");
	assert(Evil(3) == "It's Evil!");
	
	return 0;
}