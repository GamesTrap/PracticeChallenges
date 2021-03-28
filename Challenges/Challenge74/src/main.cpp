#include <cstdint>

constexpr int32_t BasicOp(const char op, const int32_t val1, const int32_t val2)
{
	switch(op)
	{
	case '+':
		return val1 + val2;

	case '-':
		return val1 - val2;

	case '*':
		return val1 * val2;

	case '/':
		return val1 / val2;
		
	default:
		return 0;
	}
}

int main()
{
	static_assert(BasicOp('+', 5, 4) == 9);
	static_assert(BasicOp('-', 11, 8) == 3);
	static_assert(BasicOp('*', 3, 4) == 12);
	static_assert(BasicOp('/', 16, 4) == 4);
	
	return 0;
}