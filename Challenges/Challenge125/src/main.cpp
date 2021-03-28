#include <cstdint>

constexpr uint32_t NextPrime(uint32_t n)
{
	if(n <= 1)
		return 2;

	uint32_t prime = n;
	bool found = false;

	while(!found)
	{
		++prime;

		if(prime <= 1)
			continue;
		if(prime <= 3)
		{
			found = true;
			continue;
		}

		if(prime % 2 == 0 || prime % 3 == 0)
			continue;

		bool temp = false;
		for(uint32_t i = 5; i * i <= prime; i += 6)
		{
			if(prime % i == 0 || prime % (i + 2) == 0)
			{
				temp = true;
				break;
			}

			if(temp)
				break;
		}
		if(temp)
			continue;

		found = true;
	}

	return prime;
}

int main()
{
	static_assert(NextPrime(0) == 2);
	static_assert(NextPrime(2) == 3);
	static_assert(NextPrime(3) == 5);
	static_assert(NextPrime(5) == 7);
	static_assert(NextPrime(11) == 13);
	static_assert(NextPrime(13) == 17);
	static_assert(NextPrime(17) == 19);
	static_assert(NextPrime(23) == 29);

	return 0;
}