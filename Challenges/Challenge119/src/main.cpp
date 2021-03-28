#include <cassert>
#include <cstdint>
#include <cmath>

double converter(uint32_t mpg)
{
	constexpr double imperialGallonToLitre = 4.54609188;
	constexpr double mileToKm = 1.609344;
	double result = mpg * mileToKm / imperialGallonToLitre;

	return std::round(result * 100) / 100.00;
}

int main()
{
	assert(converter(12) == 4.25);
	assert(converter(24) == 8.50);
	assert(converter(36) == 12.74);

	return 0;
}