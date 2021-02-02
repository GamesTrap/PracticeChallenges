#include <cassert>
#include <cstdint>
#include <string>

std::string EvenOrOdd(const int32_t number)
{
	return number % 2 == 0 ? "Even" : "Odd";
}

int main()
{
	assert(EvenOrOdd(2) == "Even");
	assert(EvenOrOdd(1) == "Odd");
	assert(EvenOrOdd(0) == "Even");
	assert(EvenOrOdd(7) == "Odd");
	assert(EvenOrOdd(-1) == "Odd");
	
	return 0;
}