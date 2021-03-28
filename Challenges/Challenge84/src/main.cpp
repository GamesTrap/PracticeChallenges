#include <cassert>
#include <cstdint>

class Cube
{
public:
	constexpr int32_t GetSide() const
	{
		return m_side;
	}

	constexpr void SetSide(const int32_t num)
	{
		m_side = num;
	}

private:
	int32_t m_side = 0;
};

int main()
{
	Cube c;
	assert(c.GetSide() == 0);
	c.SetSide(10);
	assert(c.GetSide() == 10);
	
	return 0;
}