constexpr double SakuraFall(const double v)
{
	return v > 0.0 ? 400 / v : 0.0;
}

int main()
{
	static_assert(SakuraFall(5) == 80);
	
	return 0;
}