#include <cassert>
#include <cstdint>
#include <string>

std::string BMI(const double weight, const double height)
{
	const double bmi = weight / (height * height);

	if (bmi <= 18.5)
		return "Underweight";
	if (bmi <= 25.0)
		return "Normal";
	if (bmi <= 30.0 + 1e-9) //1e-9 Epsilon
		return "Overweight";

	return "Obese";
}

int main()
{
	assert(BMI(81.585, 2.1) == "Underweight");
	assert(BMI(90.25, 1.9) == "Normal");
	assert(BMI(86.7, 1.7) == "Overweight");
	assert(BMI(200, 1.6) == "Obese");
	
	return 0;
}