#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

//#include "Deck.h"

using namespace std;

class Hand
{
public:
	int hand_value;
	vector<string> chand;
	Hand(Deck d, int num_cards);
	void Discard(int num_cards, vector<string>Dcards, Deck d, bool Return);
	int operator*(int rhs);
};