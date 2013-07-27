#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

#include "deck.h"
#include "Hand.h"

using namespace std;

void Hand::Discard(int num_cards, vector<string>Dcards, Deck d, bool Return)
{
	for (int i=0; i<Dcards.size(); i++)
	{
		if (Return); d.cdeck.emplace_back(Dcards[i]);
		chand.erase(find(chand.begin(), chand.end(), Dcards[i]));

		

	}
}

int Hand::operator*(int rhs)
{
	return chand.size()*rhs;
}