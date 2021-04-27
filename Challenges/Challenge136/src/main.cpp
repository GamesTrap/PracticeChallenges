#include <cassert>
#include <cstdint>
#include <cmath>

struct Point
{
	int32_t x;
	int32_t y;
};

double DistanceBetweenTwoPoints(const Point& a, const Point& b)
{
	return std::sqrt((a.x - a.y) * (a.x - a.y) + (b.x - b.y) * (b.x - b.y));
}

int main()
{
	assert(DistanceBetweenTwoPoints(Point{3, 3}, Point{3, 3}) == 0.0);
	assert(std::abs(DistanceBetweenTwoPoints(Point{5, 1}, Point{1, 4}) - 5) < 0.000001);

	return 0;
}