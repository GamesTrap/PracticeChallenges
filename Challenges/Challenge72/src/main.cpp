#include <cassert>
#include <string>

std::string BoolToWord(const bool value)
{
	return value ? "Yes" : "No";
}

int main()
{
	assert(BoolToWord(true) == "Yes");
	assert(BoolToWord(false) == "No");
	
	return 0;
}