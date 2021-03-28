#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>
#include <array>

std::string Replace(std::string s)
{
	/*static constexpr std::array<char, 10> vowels
	{
		'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
	};

	for (const char c : vowels)
		std::replace(s.begin(), s.end(), c, '!');

	return s;*/

	const std::string vowels = "aeiouAEIOU";
	for(char& c : s)
	{
		if (vowels.find(c) != std::string::npos)
			c = '!';
	}
	
	return s;
}

int main()
{
	assert(Replace("Hi!") == "H!!");
	assert(Replace("!Hi! Hi!") == "!H!! H!!");
	assert(Replace("aeiou") == "!!!!!");
	assert(Replace("ABCDE") == "!BCD!");
	
	return 0;
}