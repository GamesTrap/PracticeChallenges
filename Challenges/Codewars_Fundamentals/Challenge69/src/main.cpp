#include <cassert>
#include <cstdint>
#include <functional>

/*int32_t factorial(const int32_t n)
{
	return n <= 1 ? 1 : factorial(n - 1) * n;
}

int32_t FactorialRemainder(const int32_t n, const int32_t mod)
{
	return n == 1 ? 1 : (n * factorial(n - 1)) % mod;
}

bool AmIWilson(const uint32_t n)
{
	if (n <= 1)
		return false;
	
	return (FactorialRemainder(n - 1, n * n) + 1) % (n * n) == 0;
}*/

bool AmIWilson(const uint32_t n)
{
	return n == 5 || n == 13 || n == 563;
}

int main()
{
	assert(AmIWilson(9) == false);
	assert(AmIWilson(6) == false);
	
	assert(AmIWilson(2) == false);
	assert(AmIWilson(17) == false);
	
	assert(AmIWilson(5) == true);
	
	assert(AmIWilson(221) == false);
	
	assert(AmIWilson(563) == true);
	
	return 0;
}