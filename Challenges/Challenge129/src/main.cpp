#include <cstdint>
#include <cassert>
#include <string>

std::string Cake(uint32_t x, const std::string& y)
{
	uint32_t candles = 0;
	for(uint32_t i = 0; i < y.size(); ++i)
	{
		if(i % 2 == 0)
			candles += y[i];
		else
			candles += y[i] - 'a';
	}

	return candles > x * 0.7f ? "Fire!" : "That was close!";
}

int main()
{
	assert(Cake(900, "abcdef") == "That was close!");
	assert(Cake(56, "ifkhchlhfd") == "Fire!");
	assert(Cake(256, "aaaaaddddr") == "Fire!");

	return 0;
}