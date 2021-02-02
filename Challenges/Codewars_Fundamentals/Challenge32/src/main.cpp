#include <cstdint>

constexpr int32_t AreaOrPerimeter(const int32_t length, const int32_t width)
{
	return 2 * (length + width);
}

int main()
{
	static_assert(AreaOrPerimeter(4, 4) == 16);
	static_assert(AreaOrPerimeter(6, 10) == 32);
	
	return 0;
}