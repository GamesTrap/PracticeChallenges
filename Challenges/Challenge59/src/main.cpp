#include <cassert>
#include <cstdint>
#include <string>
#include <algorithm>

std::string NoSpace(std::string x)
{
	x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
	return x;
}

int main()
{
	assert(NoSpace("8 j 8   mBliB8g  imjB8B8  jl  B") == "8j8mBliB8gimjB8B8jlB");
	assert(NoSpace("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd") == "88Bifk8hB8BB8BBBB888chl8BhBfd");
	assert(NoSpace("8aaaaa dddd r     ") == "8aaaaaddddr");
	assert(NoSpace("jfBm  gk lf8hg  88lbe8 ") == "jfBmgklf8hg88lbe8");
	assert(NoSpace("8j aam") == "8jaam");
	
	return 0;
}