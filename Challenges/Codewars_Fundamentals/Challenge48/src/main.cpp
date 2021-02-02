constexpr bool XORf(const bool a, const bool b)
{
	return a ^ b;
}

int main()
{
	static_assert(XORf(false, false) == false);
	static_assert(XORf(true, false) == true);
	static_assert(XORf(false, true) == true);
	static_assert(XORf(true, true) == false);
	
	static_assert(XORf(false, XORf(false, false)) == false);
	static_assert(XORf(XORf(true, false), false) == true);
	static_assert(XORf(XORf(true, true), false) == false);
	static_assert(XORf(true, XORf(true, true)) == true);
	static_assert(XORf(XORf(false, false), XORf(false, false)) == false);
	static_assert(XORf(XORf(false, false), XORf(false, true)) == true);
	static_assert(XORf(XORf(true, false), XORf(false, false)) == true);
	static_assert(XORf(XORf(true, false), XORf(true, false)) == false);
	static_assert(XORf(XORf(true, true), XORf(true, false)) == true);
	static_assert(XORf(XORf(true, XORf(true, true)), XORf(XORf(true, true), false)) == true);
	
	return 0;
}