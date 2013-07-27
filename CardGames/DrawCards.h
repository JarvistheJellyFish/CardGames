#include <iostream>
#include <stdlib.h>

//#include "Hand.h"
//#include "Deck.h"

using namespace std;

void draw_cards(Deck &d, int num_cards, int total, vector<string> &h)
{
	for (int i=0; i<num_cards; i++)
	{
		h.push_back(d.cdeck[0]);
		d.cdeck.erase(d.cdeck.begin());
	}
}