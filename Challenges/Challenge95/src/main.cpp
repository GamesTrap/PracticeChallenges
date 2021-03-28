#include <cassert>
#include <cstdint>

constexpr bool PythagoreanTriple(const int32_t a, const int32_t b, const int32_t c)
{
	return a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b;
}

int main()
{
	static_assert(PythagoreanTriple(3, 4, 5) == true);
	static_assert(PythagoreanTriple(5, 3, 4) == true);
	static_assert(PythagoreanTriple(3, 5, 9) == false);
	static_assert(PythagoreanTriple(5, 2, 4) == false);
	
	return 0;
}