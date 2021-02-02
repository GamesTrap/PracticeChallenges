#include <cassert>
#include <cstdint>
#include <string>

std::string Integrate(const int32_t coefficient, const int32_t exponent)
{
	return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string(exponent + 1);
}

int main()
{
	assert(Integrate(3, 2) == "1x^3");
	assert(Integrate(12, 5) == "2x^6");
	assert(Integrate(20, 1) == "10x^2");
	assert(Integrate(40, 3) == "10x^4");
	assert(Integrate(90, 2) == "30x^3");
	
	return 0;
}