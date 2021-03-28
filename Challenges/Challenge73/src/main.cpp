#include <cstdint>

constexpr uint32_t Combat(const int32_t health, const int32_t damage)
{
	return (health - damage > 0) ? health - damage : 0;
}

int main()
{
	static_assert(Combat(100, 5) == 95);
	static_assert(Combat(83, 16) == 67);
	static_assert(Combat(20, 30) == 0);
	
	return 0;
}