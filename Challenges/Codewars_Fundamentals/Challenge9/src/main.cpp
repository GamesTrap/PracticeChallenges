#include <cstdint>

constexpr uint32_t Paperwork(const int32_t classmates, const int32_t pages)
{
	if (classmates < 0 || pages < 0)
		return 0;

	return classmates * pages;
}

int main()
{
	static_assert(Paperwork(5, 5) == 25);
	static_assert(Paperwork(5, -5) == 0);
	static_assert(Paperwork(-5, 5) == 0);
	static_assert(Paperwork(-5, -5) == 0);
	static_assert(Paperwork(5, 0) == 0);
	
	return 0;
}