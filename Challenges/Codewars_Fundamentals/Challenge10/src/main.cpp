#include <cstdint>
#include <array>

constexpr int32_t FindDifference(const std::array<int32_t, 3>& a, const std::array<int32_t, 3>& b)
{
	int32_t aMul = 1, bMul = 1;

	for (int32_t i : a)
		aMul *= i;
	for (int32_t i : b)
		bMul *= i;

	return std::max(aMul, bMul) - std::min(aMul, bMul);
}

int main()
{
	static_assert(FindDifference({ 3, 2, 5 }, { 1, 4, 4 }) == 14);
	static_assert(FindDifference({ 9, 7, 2 }, { 5, 2, 2 }) == 106);
	static_assert(FindDifference({ 11, 2, 5 }, { 1, 10, 8 }) == 30);
	static_assert(FindDifference({ 4, 4, 7 }, { 3, 9, 3 }) == 31);
	static_assert(FindDifference({ 15, 20, 25 }, { 10, 30, 25 }) == 0);
	
	return 0;
}