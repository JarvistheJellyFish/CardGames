#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Deck.h"
#include "Hand.h"
#include "DrawCards.h"

using namespace std;

Hand::Hand(Deck d, int num_cards)
{
	for (int i=0; i<num_cards; i++)
	{
		chand.push_back(d.cdeck[0]);
		d.cdeck.erase(d.cdeck.begin());
	}
}