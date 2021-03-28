#include <cassert>
#include <cstdint>
#include <string>

std::string Greet()
{
	return "hello world!";
}

int main()
{
	assert(Greet() == "hello world!");
	
	return 0;
}