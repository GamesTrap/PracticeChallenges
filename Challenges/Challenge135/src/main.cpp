#include <cassert>
#include <string>

std::string RepeatStr(const std::size_t repeat, const std::string& str)
{
	if(repeat == 0 || str.empty())
		return "";

	std::string res = "";
	for(uint32_t i = 0; i < repeat; ++i)
		res += str;

	return res;
}

int main()
{
	assert(RepeatStr(3, "*") == "***");
	assert(RepeatStr(5, "#") == "#####");
	assert(RepeatStr(2, "ha ") == "ha ha ");
	assert(RepeatStr(5, ">") == ">>>>>");
	assert(RepeatStr(10, "!") == "!!!!!!!!!!");
	assert(RepeatStr(3, "hello ") == "hello hello hello ");
	assert(RepeatStr(3, "$") == "$$$");
	assert(RepeatStr(5, "a") == "aaaaa");
	assert(RepeatStr(6, "A") == "AAAAAA");
	assert(RepeatStr(7, "aA") == "aAaAaAaAaAaAaA");
	assert(RepeatStr(3, "") == "");
	assert(RepeatStr(0, "null") == "");
	assert(RepeatStr(0, "") == "");

	return 0;
}