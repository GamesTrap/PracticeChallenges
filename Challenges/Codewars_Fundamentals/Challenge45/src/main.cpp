#include <cassert>
#include <cstdint>
#include <cmath>

bool IsEven(const double n)
{
	return std::fmod(n, 2.0) == 0;
}

int main()
{
	assert(IsEven(0) == true);
	assert(IsEven(0.5) == false);
	assert(IsEven(1) == false);
	assert(IsEven(2) == true);
	assert(IsEven(-4) == true);
	
	return 0;
}