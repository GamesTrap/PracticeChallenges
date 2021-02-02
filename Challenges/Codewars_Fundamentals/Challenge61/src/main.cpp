#include <cassert>
#include <algorithm>
#include <string>
#include <vector>

std::string TwoSort(std::vector<std::string> s)
{
	std::string ans;
	std::sort(s.begin(), s.end());

	for(const char c : s[0])
	{
		ans += c;
		ans += "***";
	}
	ans.erase(ans.end() - 3, ans.end());
	
	return ans;
}

int main()
{
	assert(TwoSort({ "bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps" }) == "b***i***t***c***o***i***n");
	assert(TwoSort({ "turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones" }) == "a***r***e");
	
	return 0;
}