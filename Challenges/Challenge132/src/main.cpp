#include <cassert>
#include <string>
#include <array>
#include <cmath>

class Wallpaper
{
public:
	static std::string WallPaper(double l, double w, double h)
	{
		return m_numbers[std::ceil(1.15 * 2 * (l + w) * h / 5.2)];
	}

private:
	inline static std::array<std::string, 21> m_numbers
	{
		"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
		"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
	};
};

int main()
{
	assert(Wallpaper::WallPaper(6.3, 4.5, 3.29) == "sixteen");
	assert(Wallpaper::WallPaper(7.8, 2.9, 3.29) == "sixteen");
	assert(Wallpaper::WallPaper(6.3, 5.8, 3.13) == "seventeen");
	assert(Wallpaper::WallPaper(6.1, 6.7, 2.81) == "sixteen");

	return 0;
}