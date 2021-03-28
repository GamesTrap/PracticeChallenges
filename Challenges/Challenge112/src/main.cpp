#include <cassert>
#include <cstdint>
#include <array>
#include <string>

std::array<std::string, 3> FixTheMeerkat(std::array<std::string, 3> arr)
{
	std::swap(arr[0], arr[2]);
	
	return arr;
}

int main()
{
	const std::array<std::string, 3> res1{ "head", "body", "tail" };
	assert(FixTheMeerkat({ "tail", "body", "head" }) == res1);
	const std::array<std::string, 3> res2{ "heads", "body", "tails" };
	assert(FixTheMeerkat({ "tails", "body", "heads" }) == res2);
	const std::array<std::string, 3> res3{ "top", "middle", "bottom" };
	assert(FixTheMeerkat({ "bottom", "middle", "top" }) == res3);
	const std::array<std::string, 3> res4{ "upper legs", "torso", "lower legs" };
	assert(FixTheMeerkat({ "lower legs", "torso", "upper legs" }) == res4);
	const std::array<std::string, 3> res5{ "sky", "rainbow", "ground" };
	assert(FixTheMeerkat({ "ground", "rainbow", "sky" }) == res5);
	
	return 0;
}