#include <cstdint>

constexpr int32_t Mango(const int32_t quantity, const int32_t price)
{
	return (quantity - quantity / 3) * price;
}

int main()
{
	static_assert(Mango(3, 3) == 6);
	static_assert(Mango(9, 5) == 30);
	
	return 0;
}