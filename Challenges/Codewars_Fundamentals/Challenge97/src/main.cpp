#include <cassert>
#include <cstdint>
#include <string>

std::string RPS(const std::string& p1, const std::string& p2)
{
	if (p1 == "rock" && p2 == "paper" || p1 == "paper" && p2 == "scissors")
		return "Player 2 won!";

	return p1 == p2 ? "Draw!" : "Player 1 won!";
}

int main()
{
	assert(RPS("rock", "scissors") == "Player 1 won!");
	assert(RPS("rock", "paper") == "Player 2 won!");
	assert(RPS("rock", "rock") == "Draw!");
	
	return 0;
}