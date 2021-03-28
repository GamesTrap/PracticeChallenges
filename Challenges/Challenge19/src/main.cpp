#include <cassert>
#include <string>

std::string ReverseString(const std::string& str)
{
	return std::string(str.rbegin(), str.rend());
}

int main()
{
	assert(ReverseString("hello") == "olleh");
	assert(ReverseString("rat") == "tar");
	assert(ReverseString("alpha") == "ahpla");
	assert(ReverseString("codewars") == "srawedoc");
	assert(ReverseString("football") == "llabtoof");
	assert(ReverseString("translation") == "noitalsnart");
	
	return 0;
}