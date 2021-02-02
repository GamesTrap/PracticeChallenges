#include <cstdint>

constexpr int32_t MakeNegative(const int32_t i)
{
	return i > 0 ? -i : i;
}

int main()
{
	static_assert(MakeNegative(42) == -42);

	return 0;
}