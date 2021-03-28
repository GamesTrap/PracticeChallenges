#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

std::string DNAToRNA(std::string dna)
{
	std::replace(dna.begin(), dna.end(), 'T', 'U');
	
	return dna;
}

int main()
{
	assert(DNAToRNA("GCAT") == "GCAU");
	
	return 0;
}