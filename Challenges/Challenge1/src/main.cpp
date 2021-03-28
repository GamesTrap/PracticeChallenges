#include <cassert>
#include <string>
#include <vector>

std::string Likes(const std::vector<std::string>& names)
{
	switch(names.size())
	{
	case 0:
		return "no one likes this";

	case 1:
		return names[0] + " likes this";

	case 2:
		return names[0] + " and " + names[1] + " like this";

	case 3:
		return names[0] + ", " + names[1] + " and " + names[2] + " like this";

	default:
		return names[0] + ", " + names[1] + " and " + std::to_string((names.size() - 2)) + " others like this";
	}
}

int main()
{
	assert(Likes({}) == "no one likes this");
	assert(Likes({ "Peter" }) == "Peter likes this");
	assert(Likes({ "Jacob", "Alex" }) == "Jacob and Alex like this");
	assert(Likes({ "Max", "John", "Mark" }) == "Max, John and Mark like this");
	assert(Likes({ "Alex", "Jacob", "Mark", "Max" }) == "Alex, Jacob and 2 others like this");
	
	return 0;
}