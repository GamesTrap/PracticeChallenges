#include <cassert>
#include <cstdint>
#include <cmath>

int32_t DutyFree(const int32_t price, const int32_t discount, const int32_t holidayCost)
{
	return std::floor(static_cast<float>(holidayCost) / (static_cast<float>(price) * (static_cast<float>(discount) / 100.0f)));
}

int main()
{
	assert(DutyFree(12, 50, 1000) == 166);
	assert(DutyFree(17, 10, 500) == 294);
	assert(DutyFree(24, 35, 3000) == 357);
	assert(DutyFree(1400, 35, 10000) == 20);
	assert(DutyFree(700, 26, 7000) == 38);
	
	return 0;
}