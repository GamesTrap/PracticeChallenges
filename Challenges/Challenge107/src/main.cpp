#include <cassert>
#include <cstdint>
#include <string>
#include <vector>

std::string HowManyDalmatians(const int32_t number)
{
    std::vector<std::string> dogs{ "Hardly any", "More than a handful!", "Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
    return number <= 10 ? dogs[0] : number <= 50 ? dogs[1] : number >= 101 ? dogs[3] : dogs[2];
}

int main()
{
    assert(HowManyDalmatians(26) == "More than a handful!");
    assert(HowManyDalmatians(8) =="Hardly any");
    assert(HowManyDalmatians(14) == "More than a handful!");
    assert(HowManyDalmatians(80) == "Woah that's a lot of dogs!");
    assert(HowManyDalmatians(100) == "Woah that's a lot of dogs!");
    assert(HowManyDalmatians(50) == "More than a handful!");
    assert(HowManyDalmatians(10) == "Hardly any");
    assert(HowManyDalmatians(101) == "101 DALMATIONS!!!");
	
	return 0;
}