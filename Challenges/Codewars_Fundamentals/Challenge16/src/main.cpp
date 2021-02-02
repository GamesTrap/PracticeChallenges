#include <cstdint>

constexpr int32_t Past(const int32_t hours, const int32_t minutes, const int32_t seconds)
{
	return hours * 60  * 60 * 1000 + minutes * 60 * 1000 + seconds * 1000;
}

int main()
{
	static_assert(Past(0, 1, 1) == 61000);
	static_assert(Past(1, 1, 1) == 3661000);
	static_assert(Past(0, 0, 0) == 0);
	static_assert(Past(1, 0, 1) == 3601000);
	static_assert(Past(1, 0, 0) == 3600000);
	
	return 0;
}