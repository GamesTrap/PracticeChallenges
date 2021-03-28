#include <cassert>
#include <cstdint>

class Person
{
public:
	Person(const int32_t x, const  int32_t y, const  int32_t z)
		: m_x(x), m_y(y), m_z(z)
	{
	}

	void Location(int32_t& x, int32_t& y, int32_t& z) const
	{
		x = m_x;
		y = m_y;
		z = m_z;
	}

private:
	int32_t m_x, m_y, m_z;
};

int main()
{
	const Person person(1, 2, 3);
	int32_t x = 0, y = 0, z = 0;
	person.Location(x, y, z);
	assert(x == 1);
	assert(y == 2);
	assert(z == 3);
	
	return 0;
}