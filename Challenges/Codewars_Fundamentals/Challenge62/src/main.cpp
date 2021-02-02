#include <cassert>
#include <cstdint>
#include <string>

std::string HowMuchILoveYou(const uint32_t petals)
{
    switch (petals % 6)
    {
    case 0:
        return "not at all";
    case 1:
        return "I love you";
    case 2:
        return "a little";
    case 3:
        return "a lot";
    case 4:
        return "passionately";
    case 5:
        return "madly";
    default:
        return "I don't";
    }
}

int main()
{
	assert(HowMuchILoveYou(7) == "I love you");
	assert(HowMuchILoveYou(3) == "a lot");
	assert(HowMuchILoveYou(6) == "not at all");
	
	return 0;
}