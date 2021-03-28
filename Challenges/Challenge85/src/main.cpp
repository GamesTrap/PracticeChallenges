#include <cassert>
#include <cstdint>
#include <string>

bool Feast(const std::string& beast, const std::string& dish)
{
	return beast.front() == dish.front() && beast.end() == dish.end();
}

int main()
{
	assert(Feast("great blue heron", "garlic naan") == true);
	assert(Feast("chickadee", "chocolate cake") == true);
	assert(Feast("brown bear", "bear claw") == false);
	assert(Feast("marmot", "mulberry tart") == true);
	assert(Feast("porcupine", "pie") == true);
	assert(Feast("electric eel", "lasagna") == false);
	assert(Feast("slow loxis", "salsas") == true);
	assert(Feast("blue-footed booby", "blueberry") == true);
	assert(Feast("blue-footed booby", "binary human") == false);
	
	return 0;
}