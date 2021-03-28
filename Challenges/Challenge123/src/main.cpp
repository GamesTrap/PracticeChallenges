#include <string>
#include <cassert>
#include <algorithm>

class Printer
{
public:
	static std::string PrinterError(const std::string& s)
	{
		uint32_t errors = std::count_if(s.cbegin(), s.cend(), [](const char& c){return c > 'm';});

		return std::to_string(errors) + "/" + std::to_string(s.size());
	}
};

int main()
{
	assert(Printer::PrinterError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") == "3/56");
	assert(Printer::PrinterError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") == "6/60");
	assert(Printer::PrinterError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu") == "11/65");

	return 0;
}