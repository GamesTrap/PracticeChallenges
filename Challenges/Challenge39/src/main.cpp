#include <cassert>
#include <cstdint>
#include <array>
#include <algorithm>

uint32_t ExpressionsMatter(const uint32_t a, const uint32_t b, const uint32_t c)
{
	return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}

int main()
{
    assert(ExpressionsMatter(2, 1, 2) == 6);
    assert(ExpressionsMatter(2, 1, 1) == 4);
    assert(ExpressionsMatter(1, 1, 1) == 3);
    assert(ExpressionsMatter(1, 2, 3) == 9);
    assert(ExpressionsMatter(1, 3, 1) == 5);
    assert(ExpressionsMatter(2, 2, 2) == 8);
	
    assert(ExpressionsMatter(5, 1, 3) == 20);
    assert(ExpressionsMatter(3, 5, 7) == 105);
    assert(ExpressionsMatter(5, 6, 1) == 35);
    assert(ExpressionsMatter(1, 6, 1) == 8);
    assert(ExpressionsMatter(2, 6, 1) == 14);
    assert(ExpressionsMatter(6, 7, 1) == 48);
	
    assert(ExpressionsMatter(2, 10, 3) == 60);
    assert(ExpressionsMatter(1, 8, 3) == 27);
    assert(ExpressionsMatter(9, 7, 2) == 126);
    assert(ExpressionsMatter(1, 1, 10) == 20);
    assert(ExpressionsMatter(9, 1, 1) == 18);
    assert(ExpressionsMatter(10, 5, 6) == 300);
    assert(ExpressionsMatter(1, 10, 1) == 12);
	
	return 0;
}