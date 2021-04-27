#include <utility>
#include <cstdint>

constexpr std::pair<int32_t, int32_t> SwapValues(const std::pair<int32_t, int32_t>& values)
{
	return {values.second, values.first};
}

int main()
{
	static_assert(SwapValues({1, 2}) == std::pair<int32_t, int32_t>{2, 1});
	static_assert(SwapValues({14958573, 222032399}) == std::pair<int32_t, int32_t>{222032399, 14958573});

	return 0;
}