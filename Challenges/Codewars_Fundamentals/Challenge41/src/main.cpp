#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

std::string AbbrevName(const std::string& name)
{
	return std::string(1, toupper(name[0])) + "." + static_cast<char>(toupper(name[name.find_last_of(' ') + 1]));
}

int main()
{
	assert(AbbrevName("Sam Harris") == "S.H");
	assert(AbbrevName("Patrick Feenan") == "P.F");
	assert(AbbrevName("Evan Cole") == "E.C");
	assert(AbbrevName("P Favuzzi") == "P.F");
	assert(AbbrevName("David Mendieta") == "D.M");
	
	return 0;
}