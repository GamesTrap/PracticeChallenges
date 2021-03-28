#include <algorithm>
#include <cassert>
#include <cstdint>
#include <string>

std::string Correct(std::string str)
{
    std::replace(str.begin(), str.end(), '5', 'S');
    std::replace(str.begin(), str.end(), '0', 'O');
    std::replace(str.begin(), str.end(), '1', 'I');

    return str;
}

int main()
{
    assert(Correct("1F-RUDYARD K1PL1NG") == "IF-RUDYARD KIPLING");
    assert(Correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N") == "ROBERT MERLE - THE DAY OF THE DOLPHIN");
    assert(Correct("R1CHARD P. FEYNMAN - THE FEYNMAN LECTURE5 0N PHY51C5") == "RICHARD P. FEYNMAN - THE FEYNMAN LECTURES ON PHYSICS");
    assert(Correct("R1CHARD P. FEYNMAN - 5TAT15T1CAL MECHAN1C5") == "RICHARD P. FEYNMAN - STATISTICAL MECHANICS");
    assert(Correct("5TEPHEN HAWK1NG - A BR1EF H15T0RY 0F T1ME") == "STEPHEN HAWKING - A BRIEF HISTORY OF TIME");
    assert(Correct("5TEPHEN HAWK1NG - THE UN1VER5E 1N A NUT5HELL") == "STEPHEN HAWKING - THE UNIVERSE IN A NUTSHELL");
    assert(Correct("ERNE5T HEM1NGWAY - A FARWELL T0 ARM5") == "ERNEST HEMINGWAY - A FARWELL TO ARMS");
    assert(Correct("ERNE5T HEM1NGWAY - F0R WH0M THE BELL T0LL5") == "ERNEST HEMINGWAY - FOR WHOM THE BELL TOLLS");
    assert(Correct("ERNE5T HEM1NGWAY - THE 0LD MAN AND THE 5EA") == "ERNEST HEMINGWAY - THE OLD MAN AND THE SEA");
    assert(Correct("J. R. R. T0LK1EN - THE L0RD 0F THE R1NG5") == "J. R. R. TOLKIEN - THE LORD OF THE RINGS");
	
	return 0;
}