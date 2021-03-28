#include <cassert>
#include <cstdint>
#include <string>

std::string BonusTime(const uint32_t salary, const bool bonus)
{
	return bonus ? "$" + std::to_string(salary * 10) : "$" + std::to_string(salary);
}

int main()
{
	assert(BonusTime(10000, true) == "$100000");
	assert(BonusTime(25000, true) == "$250000");
	assert(BonusTime(10000, false) == "$10000");
	assert(BonusTime(60000, false) == "$60000");
	assert(BonusTime(2, true) == "$20");
	assert(BonusTime(78, false) == "$78");
	assert(BonusTime(67890, true) == "$678900");
	
	return 0;
}