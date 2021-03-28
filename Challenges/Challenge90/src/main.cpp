#include <cassert>
#include <cstdint>
#include <numeric>
#include <vector>

double CalcAverage(const std::vector<int32_t>& values)
{
	return std::accumulate(values.begin(), values.end(), 0.0) / values.size();
}

int main()
{
	assert(CalcAverage({ 2, 5 }) <= 3.5 + 1e-3);
	assert(CalcAverage({ 5 }) <= 5 + 1e-3);
	assert(CalcAverage({ 4, 2, 1 }) <= 2.33333 + 1e-3);
	assert(CalcAverage({ 3, 2, 5, 1 }) <= 2.75 + 1e-3);
	assert(CalcAverage({ 3, 2, 3, 5, 1 }) <= 2.8 + 1e-3);
	assert(CalcAverage({ 3, 4, 2, 4, 5 }) <= 3.6 + 1e-3);
	
	assert(CalcAverage({ -2, -6, 5, 2 }) <= -0.25 + 1e-3);
	assert(CalcAverage({ 6, -6, 9, 8 }) <= 4.25 + 1e-3);
	assert(CalcAverage({ -7, -4, -10, -6, -6 }) <= -6.6 + 1e-3);
	assert(CalcAverage({ -3, -8, -10, -6, -5 }) <= -6.4 + 1e-3);
	assert(CalcAverage({ -4, -4 }) <= -4 + 1e-3);
	assert(CalcAverage({ -5 }) <= -5 + 1e-3);
	
	assert(CalcAverage({ 20, 14, 16, 11, 20, 14, 14 }) <= 15.5714 + 1e-3);
	assert(CalcAverage({ -1,0,-3,10,2,-9,-1 }) <= -0.285714 + 1e-3);
	assert(CalcAverage({ 15,18,16,17,15,12,16,15 }) <= 15.5 + 1e-3);
	assert(CalcAverage({ 13,11,11,19,12,20,17,16,14 }) <= 14.7778 + 1e-3);
	assert(CalcAverage({ 13,15,13,17,19,20,17,18,13,18 }) <= 16.3 + 1e-3);
	assert(CalcAverage({ 3,7,2,-5,10,8,-7,1 }) <= 2.375 + 1e-3);
	
	assert(CalcAverage({ 24, 30, 12, 26, 23, 24, 29, 12, 16, 13 }) <= 20.9 + 1e-3);
	assert(CalcAverage({ -2,-2,1,1,-2,-8,3,-4,-2,1 }) <= -1.4 + 1e-3);
	assert(CalcAverage({ 20,28,25,11,24,25,22,12,15,12,14,22 }) <= 19.1667 + 1e-3);
	assert(CalcAverage({ 46,35,45,47,25,42,43,40,35,25,48 }) <= 39.1818 + 1e-3);
	assert(CalcAverage({ -4,6,7,-5,-4,-2,-3,7,7,5,8,-6,5 }) <= 1.61538 + 1e-3);
	assert(CalcAverage({ 22,22,24,15,12,18,22,14,24,23,29,19,22,20,26 }) <= 20.8 + 1e-3);
	
	return 0;
}