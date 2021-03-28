#include <cstdint>

constexpr uint32_t CenturyFromYear(const uint32_t year)
{
	return (year + 99) / 100;
}

int main()
{
	static_assert(CenturyFromYear(1705) == 18);
	static_assert(CenturyFromYear(1900) == 19);
	static_assert(CenturyFromYear(1601) == 17);
	static_assert(CenturyFromYear(2000) == 20);
	
	return 0;
}