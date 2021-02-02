#include <cassert>
#include <cstdint>
#include <cmath>

double StartingMark(const double bodyHeight)
{
	const double a = (10.67 - 9.45) / (1.83 - 1.52);
	const double b = 10.67 - a * 1.83;

	return std::round(100 * (bodyHeight * a + b)) / 100;
}

int main()
{
	assert(StartingMark(1.52) == 9.45);
	assert(StartingMark(1.83) == 10.67);
	assert(StartingMark(1.22) == 8.27);
	assert(StartingMark(2.13) == 11.85);
	
	return 0;
}