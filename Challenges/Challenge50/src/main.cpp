#include <cstdint>

constexpr uint32_t Goals(const uint32_t laLigaGoals, const uint32_t copaDelReyGoals, const uint32_t championsLeagueGoals)
{
	return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

int main()
{
	static_assert(Goals(0, 0, 0) == 0);
	static_assert(Goals(43, 10, 5) == 58);
	
	return 0;
}