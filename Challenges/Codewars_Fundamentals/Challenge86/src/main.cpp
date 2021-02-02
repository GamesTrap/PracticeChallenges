#include <cassert>
#include <cstdint>
#include <string>

std::string RemoveExclamationMark(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
	return str;
}

int main()
{
	assert(RemoveExclamationMark("Hello World!") == "Hello World");
	assert(RemoveExclamationMark("Hello World!!!") == "Hello World");
	assert(RemoveExclamationMark("Hi! Hello!") == "Hi Hello");
	assert(RemoveExclamationMark("Hi!!! Hello!") == "Hi Hello");
	assert(RemoveExclamationMark("Hi! He!l!lo!") == "Hi Hello");
	
	return 0;
}