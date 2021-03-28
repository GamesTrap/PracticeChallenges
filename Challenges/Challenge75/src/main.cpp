#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

bool IsPalindrom(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);

	return str == std::string(str.rbegin(), str.rend());
}

int main()
{
	assert(IsPalindrom("a") == true);
	assert(IsPalindrom("aba") == true);
	assert(IsPalindrom("Abba") == true);
	assert(IsPalindrom("hello") == false);
	
	return 0;
}