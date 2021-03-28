#include <cassert>
#include <string>
#include <algorithm>
#include <iostream>

std::string ReverseLetter(const std::string& str)
{
	std::string ans(str.rbegin(), str.rend());

	ans.erase(std::remove_if(ans.begin(), ans.end(), [](const char c){ return !std::isalpha(c); }), ans.end());

	return ans;
}

int main()
{
	assert(ReverseLetter("krishan") == "nahsirk");
	assert(ReverseLetter("ultr53o?n") == "nortlu");
	assert(ReverseLetter("ab23c") == "cba");
	assert(ReverseLetter("krish21an") == "nahsirk");

	return 0;
}