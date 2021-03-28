#include <cstdint>

constexpr char GetChar(const int32_t i)
{
	return static_cast<char>(i);
}

int main()
{
	static_assert(GetChar(55) == '7');
	static_assert(GetChar(56) == '8');
	static_assert(GetChar(57) == '9');
	static_assert(GetChar(58) == ':');
	static_assert(GetChar(59) == ';');
	static_assert(GetChar(60) == '<');
	static_assert(GetChar(61) == '=');
	static_assert(GetChar(62) == '>');
	static_assert(GetChar(63) == '?');
	static_assert(GetChar(64) == '@');
	static_assert(GetChar(65) == 'A');

	return 0;
}