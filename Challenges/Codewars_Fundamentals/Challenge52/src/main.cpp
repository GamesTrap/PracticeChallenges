#include <cstdint>

constexpr int32_t Opposite(const int32_t number)
{
	return -number;
}

int main()
{
	static_assert(Opposite(1) == -1);
	
	return 0;
}