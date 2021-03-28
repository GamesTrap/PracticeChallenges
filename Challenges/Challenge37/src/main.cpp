#include <cassert>
#include <cstdint>
#include <string>
#include <array>

std::string GetPlanetName(const uint32_t id)
{
	std::array<std::string, 9> planets{ "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
	return planets[id - 1];
}

int main()
{
	assert(GetPlanetName(2) == "Venus");
	assert(GetPlanetName(5) == "Jupiter");
	assert(GetPlanetName(3) == "Earth");
	assert(GetPlanetName(4) == "Mars");
	assert(GetPlanetName(8) == "Neptune");
	assert(GetPlanetName(1) == "Mercury");
	
	return 0;
}