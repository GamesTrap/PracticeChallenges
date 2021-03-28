#include <cstdint>
#include <cassert>
#include <vector>
#include <stdexcept>
#include <numeric>
#include <cmath>
#include <iostream>

class NewAverage
{
public:
	static int64_t NewAvg(const std::vector<double>& arr, double navg)
	{
		int64_t res = std::ceil(navg * (arr.size() + 1.0) - std::accumulate(arr.cbegin(), arr.cend(), 0.0));
		return res > 0 ? res : throw std::logic_error("");
	}
};

int main()
{
	assert(NewAverage::NewAvg({14.0, 30.0, 5.0, 7.0, 9.0, 11.0, 16.0}, 90) == 628);
	assert(NewAverage::NewAvg({14, 30, 5, 7, 9, 11, 15}, 92) == 645);
	try
	{
		NewAverage::NewAvg({14, 30, 5, 7, 9, 11, 15}, 2);
	}
	catch(const std::exception& e)
	{
		return 0;
	}

	assert(true);
}