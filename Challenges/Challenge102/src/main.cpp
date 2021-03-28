#include <cassert>
#include <cstdint>
#include <exception>

class Guesser
{
public:
	Guesser(const int32_t number, const int32_t lives)
		: m_number(number), m_lives(lives)
	{
	}

	bool Guess(const int32_t n)
	{
		if (m_lives <= 0)
			throw std::exception();
		
		if(n == m_number)
			return true;

		--m_lives;
		return false;
	}

private:
	int32_t m_number, m_lives;
};

int main()
{
	Guesser guesser1(10, 2);
	assert(guesser1.Guess(10) == true);

	Guesser guesser2(10, 2);
	for(uint32_t i = 0; i < 10; ++i)
	{
		assert(guesser2.Guess(10) == true);
	}

	Guesser guesser3(10, 29);
	assert(guesser3.Guess(1) == false);

	Guesser guesser4(10, 2);
	guesser4.Guess(1);
	guesser4.Guess(2);
	bool catched = false;
	try
	{
		guesser4.Guess(10);
	} catch(std::exception&)
	{
		catched = true;
	}
	assert(catched);
	
	return 0;
}