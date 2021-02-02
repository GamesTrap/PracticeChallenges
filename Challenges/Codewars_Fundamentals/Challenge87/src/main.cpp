#include <cstdint>

constexpr int32_t TwiceAsOld(const int32_t dad, const int32_t son)
{
	const int32_t res = dad - (son * 2);
	return res < 0 ? -res : res;
}

int main()
{
	static_assert(TwiceAsOld(36, 7) == 22);
	static_assert(TwiceAsOld(55, 30) == 5);
	static_assert(TwiceAsOld(42, 21) == 0);
	static_assert(TwiceAsOld(22, 1) == 20);
	static_assert(TwiceAsOld(29, 0) == 29);
	
	return 0;
}