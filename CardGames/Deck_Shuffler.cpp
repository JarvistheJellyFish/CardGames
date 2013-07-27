#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "Deck.h"
using namespace std;

void Deck::Shuffle()
{
	srand(time(0));
	vector<string> ShuffledDeck(52);
	int count = 0;
	while (count < 52)
	{
		int card=rand()%52;
		if (find(ShuffledDeck.begin(), ShuffledDeck.end(), cdeck[card])!= ShuffledDeck.end())
		{
			continue;
		}
		ShuffledDeck[count]=cdeck[card];
		count++;
	}


	cdeck = ShuffledDeck;
}