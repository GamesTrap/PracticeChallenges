#include <cstdint>

class Triangle
{
public:
	constexpr static int32_t OtherAngle(const int32_t a, const int32_t b)
	{
		return 180 - a - b;
	}
};

int main()
{
	static_assert(Triangle::OtherAngle(30, 60) == 90);
	static_assert(Triangle::OtherAngle(60, 60) == 60);
	static_assert(Triangle::OtherAngle(43, 78) == 59);
	static_assert(Triangle::OtherAngle(10, 20) == 150);
	
	return 0;
}