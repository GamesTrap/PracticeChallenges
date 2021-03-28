#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

std::string ToAlternatingCase(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), [](const char c) {return isupper(c) ? tolower(c) : toupper(c); });
	return str;
}


int main()
{
	assert(ToAlternatingCase("hello world") == "HELLO WORLD");
	assert(ToAlternatingCase("HELLO WORLD") == "hello world");
	assert(ToAlternatingCase("hello WORLD") == "HELLO world");
	assert(ToAlternatingCase("HeLLo WoRLD") == "hEllO wOrld");
	assert(ToAlternatingCase("12345") == "12345");
	assert(ToAlternatingCase("1a2b3c4d5e") == "1A2B3C4D5E");
	assert(ToAlternatingCase("String.prototype.toAlternatingCase") == "sTRING.PROTOTYPE.TOaLTERNATINGcASE");
	assert(ToAlternatingCase(ToAlternatingCase("Hello World")) == "Hello World");
	assert(ToAlternatingCase("altERnaTIng cAsE") == "ALTerNAtiNG CaSe");
	assert(ToAlternatingCase("ALTerNAtiNG CaSe") == "altERnaTIng cAsE");
	assert(ToAlternatingCase("altERnaTIng cAsE <=> ALTerNAtiNG CaSe") == "ALTerNAtiNG CaSe <=> altERnaTIng cAsE");
	assert(ToAlternatingCase("ALTerNAtiNG CaSe <=> altERnaTIng cAsE") == "altERnaTIng cAsE <=> ALTerNAtiNG CaSe");
	
	return 0;
}