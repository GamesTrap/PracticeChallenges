#include <cassert>
#include <string>

std::string Apple(int32_t x)
{
	return x * x > 1000 ? "It's hotter than the sun!!": "Help yourself to a honeycomb Yorkie for the glovebox.";
}

int main()
{
	assert(Apple(2) == "Help yourself to a honeycomb Yorkie for the glovebox.");
	assert(Apple(0) == "Help yourself to a honeycomb Yorkie for the glovebox.");
	assert(Apple(31) == "Help yourself to a honeycomb Yorkie for the glovebox.");
	assert(Apple(32) == "It's hotter than the sun!!");
	assert(Apple(35) == "It's hotter than the sun!!");
	assert(Apple(50) == "It's hotter than the sun!!");

	return 0;
}