#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

uint32_t StrCount(const std::string& word, const char letter)
{
	return std::count(word.cbegin(), word.cend(), letter);
}

int main()
{
	assert(StrCount("Hello", 'o') == 1);
	assert(StrCount("Hello", 'l') == 2);
	assert(StrCount("Hello", 'q') == 0);
	assert(StrCount("Pippi", 'p') == 2);
	assert(StrCount("", 'l') == 0);
	
	return 0;
}