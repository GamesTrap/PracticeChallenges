#include <cmath>
#include <cassert>

bool ApproxEquals(const double a, const double b)
{
	return std::abs(a - b) < 1e-3 ? true : false;
}

int main()
{
	assert(ApproxEquals(175.9827, 82.25) == false);
	assert(ApproxEquals(-156.24037, -156.24038) == true);
	assert(ApproxEquals(123.2345, 123.234501) == true);
	assert(ApproxEquals(1456.3652, 1456.3641) == false);
	assert(ApproxEquals(-1.234, -1.233999) == true);
	assert(ApproxEquals(98.7655, 98.7654999) == true);
	assert(ApproxEquals(-7.28495, -7.28596) == false);
	
	return 0;
}