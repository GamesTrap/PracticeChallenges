#include <cstdint>

constexpr char GetGrade(const uint32_t a, const uint32_t b, const uint32_t c)
{
	const int32_t mean = (a + b + c) / 3;
	if (mean >= 90)
		return 'A';
	if (mean >= 80)
		return 'B';
	if (mean >= 70)
		return 'C';
	if (mean >= 60)
		return 'D';

	return 'F';
}

int main()
{
	static_assert(GetGrade(95, 90, 93) == 'A');
	static_assert(GetGrade(100, 85, 96) == 'A');
	static_assert(GetGrade(92, 93, 94) == 'A');
	static_assert(GetGrade(100, 100, 100) == 'A');
	static_assert(GetGrade(70, 70, 100) == 'B');
	static_assert(GetGrade(82, 85, 87) == 'B');
	static_assert(GetGrade(84, 79, 85) == 'B');
	static_assert(GetGrade(70, 70, 70) == 'C');
	static_assert(GetGrade(75, 70, 79) == 'C');
	static_assert(GetGrade(60, 82, 76) == 'C');
	static_assert(GetGrade(65, 70, 59) == 'D');
	static_assert(GetGrade(66, 62, 68) == 'D');
	static_assert(GetGrade(58, 62, 70) == 'D');
	static_assert(GetGrade(44, 55, 52) == 'F');
	static_assert(GetGrade(48, 55, 52) == 'F');
	static_assert(GetGrade(58, 59, 60) == 'F');
	static_assert(GetGrade(0, 0, 0) == 'F');
	
	return 0;
}