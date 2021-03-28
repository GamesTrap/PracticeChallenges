#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

bool IsUppercase(const std::string& s)
{
	return std::all_of(s.begin(), s.end(), [](const char c) {return isalpha(c) ? isupper(c) : true; });
}

int main()
{
	assert(IsUppercase("c") == false);
	assert(IsUppercase("C") == true);
	assert(IsUppercase("hello I AM DONALD") == false);
	assert(IsUppercase("HELLO I AM DONALD") == true);
	assert(IsUppercase("ACSKLDFJSgSKLDFJSKLDFJ") == false);
	assert(IsUppercase("ACSKLDFJSGSKLDFJSKLDFJ") == true);
	
	return 0;
}