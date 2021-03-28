template<typename T>
constexpr T Square(const T n)
{
	return n * n;
}

int main()
{
	static_assert(Square(42) == 42 * 42);
	
	return 0;
}