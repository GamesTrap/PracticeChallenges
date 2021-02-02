#include <cassert>
#include <cstdint>
#include <string>
#include <array>

std::array<std::string, 100> list
{
	"kiwi", "pear", "kiwi", "banana",
	"melon", "banana", "melon", "pineapple",
	"apple", "pineapple", "cucumber", "pineapple",
	"cucumber", "orange", "grape", "orange",
	"grape", "apple", "grape", "cherry",
	"pear", "cherry", "pear", "kiwi",
	"banana", "kiwi", "apple", "melon",
	"banana", "melon", "pineapple", "melon",
	"pineapple", "cucumber", "orange", "apple",
	"orange", "grape", "orange", "grape",
	"cherry", "pear", "cherry", "pear",
	"apple", "pear", "kiwi", "banana",
	"kiwi", "banana", "melon", "pineapple",
	"melon", "apple", "cucumber", "pineapple",
	"cucumber", "orange", "cucumber", "orange",
	"grape", "cherry", "apple", "cherry",
	"pear", "cherry", "pear", "kiwi",
	"pear", "kiwi", "banana", "apple",
	"banana", "melon", "pineapple", "melon",
	"pineapple", "cucumber", "pineapple", "cucumber",
	"apple", "grape", "orange", "grape",
	"cherry", "grape", "cherry", "pear",
	"cherry", "apple", "kiwi", "banana",
	"kiwi", "banana", "melon", "banana",
	"melon", "pineapple", "apple", "pineapple"
};

std::string SubtractSum(int32_t n)
{
	do
	{
		int32_t ans = 0;
		int32_t copy = n;
		while (copy > 0)
		{
			ans += copy / 10;
			copy %= 10;
		}
		n -= ans;
	} while (n < 1 || n > 100);
	
	return list[n - 1];
}

int main()
{
	assert(SubtractSum(10) == "apple");
	
	return 0;
}