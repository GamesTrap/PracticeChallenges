#include <cassert>
#include <cstdint>
#include <vector>
#include <algorithm>

std::vector<int32_t> DivisibleBy(std::vector<int32_t> numbers, int32_t divisor)
{
	numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [divisor](const int32_t num) {return num % divisor; }), numbers.end());
	
	return numbers;
}

int main()
{
	const std::vector<int32_t> res1{2, 4, 6};
	assert(DivisibleBy({ 1, 2, 3, 4, 5, 6 }, 2) == res1);
	const std::vector<int32_t> res2{3, 6};
	assert(DivisibleBy({ 1, 2, 3, 4, 5, 6 }, 3) == res2);
	const std::vector<int32_t> res3{0, 4};
	assert(DivisibleBy({ 0, 1, 2, 3, 4, 5, 6 }, 4) == res3);
	const std::vector<int32_t> res4{0};
	assert(DivisibleBy({ 0 }, 4) == res4);
	const std::vector<int32_t> res5{};
	assert(DivisibleBy({ 1, 3, 5 }, 2) == res5);
	const std::vector<int32_t> res6{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	assert(DivisibleBy({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 1) == res6);
	
	return 0;
}