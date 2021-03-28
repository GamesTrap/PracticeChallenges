#include <cstdint>

constexpr uint32_t Hotpo(uint32_t n)
{
	/*uint32_t ans = 0;
	while (n != 1)
	{
		n % 2 == 0 ? n /= 2 : n = 3 * n + 1;
		ans++;
	}

	return ans;*/

	if (n <= 1)
		return 0;

	return n % 2 ? 1 + Hotpo(3 * n + 1) : 1 + Hotpo(n / 2);
}

int main()
{
	static_assert(Hotpo(1) == 0);
	static_assert(Hotpo(5) == 5);
	static_assert(Hotpo(6) == 8);
	static_assert(Hotpo(23) == 15);
	
	return 0;
}