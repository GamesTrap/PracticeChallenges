#include <cassert>
#include <string>

std::string Greet(const std::string& n)
{
	return "Hello, " + n + " how are you doing today?";
}

int main()
{
	assert(Greet("Ryan") == "Hello, Ryan how are you doing today?");
	assert(Greet("Shingles") == "Hello, Shingles how are you doing today?");
	
	return 0;
}