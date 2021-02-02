#include <cassert>
#include <functional>
#include <iostream>

bool test = false;

void Unexpected()
{
	test = "true";
}

void Expected()
{
	test = "false";
}

void If(const bool value, const std::function<void(void)>& func1, const std::function<void(void)>& func2)
{
	value ? func1() : func2();
}

int main()
{
	If(true, Expected, Unexpected);
	assert(test == true);

	If(false, Unexpected, Expected);
	assert(test == true);
	
	return 0;
}