#include <cassert>
#include <cstdint>
#include <vector>
#include <cmath>

int32_t Index(const std::vector<int32_t>& a, const uint32_t n)
{
	return n < a.size() ? std::pow(a[n], n) : -1;
}

int main()
{
	assert(Index({ 1, 2, 3, 4 }, 2) == 9);
	assert(Index({ 5, 1, 3, 3 }, 3) == 27);
	assert(Index({ 1, 2, }, 3) == -1);
	assert(Index({ 1 }, 0) == 1);
	assert(Index({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, 9) == 1);
	assert(Index({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 }, 9) == 512);
	assert(Index({ 29, 82, 45, 10 }, 3) == 1000);
	assert(Index({ 6, 31 }, 3) == -1);
	assert(Index({ 75, 68, 35, 61, 9, 36, 89, 11, 30 }, 10) == -1);
	
	return 0;
}