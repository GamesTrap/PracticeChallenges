#include <cassert>
#include <cstdint>
#include <cmath>

int32_t CockroachSpeed(const double speed)
{
	return std::floor(speed * 10000.0 / 360.0);
}

int main()
{
	assert(CockroachSpeed(1.08) == 30);
	assert(CockroachSpeed(1.09) == 30);
	assert(CockroachSpeed(0) == 0);
	
	return 0;
}