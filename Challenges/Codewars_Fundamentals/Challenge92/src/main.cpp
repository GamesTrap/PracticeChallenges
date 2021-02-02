#include <cassert>
#include <cstdint>
#include <string>

std::string ChromosomeCheck(const std::string& sperm)
{
	std::string ans = "Congratulations! You're going to have a ";
	sperm == "XY" ? ans += "son." : ans += "daughter.";
	return ans;
}

int main()
{
	assert(ChromosomeCheck("XY") == "Congratulations! You're going to have a son.");
	assert(ChromosomeCheck("XX") == "Congratulations! You're going to have a daughter.");
	
	return 0;
}