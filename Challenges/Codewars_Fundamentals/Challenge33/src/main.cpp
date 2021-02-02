#include <cassert>
#include <cstdint>
#include <string>

std::string FakeBinary(std::string str)
{
	for (char& c : str)
		c >= '5' ? c = '1' : c = '0';

	return str;
}

int main()
{
	assert(FakeBinary("45385593107843568") == "01011110001100111");
	assert(FakeBinary("509321967506747") == "101000111101101");
	assert(FakeBinary("366058562030849490134388085") == "011011110000101010000011011");
	assert(FakeBinary("15889923") =="01111100");
	assert(FakeBinary("800857237867") == "100111001111");
	
	return 0;
}