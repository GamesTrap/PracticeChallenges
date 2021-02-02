#include <cassert>
#include <cstdint>
#include <string>

std::string Greet(const std::string& name)
{
	return name == "Johnny" ? "Hello, my love!" : "Hello, " + name + "!";
}

int main()
{
	assert(Greet("James") == "Hello, James!");
	assert(Greet("Jane") == "Hello, Jane!");
	assert(Greet("Jim") == "Hello, Jim!");
	
	assert(Greet("Johnny") == "Hello, my love!");
	
	return 0;
}