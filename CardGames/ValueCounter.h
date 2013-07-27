#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

//#include "Hand.h"

using namespace std;

int ValueCounter(Hand hand, bool AceHigh) //Because of caps, it works on both version of the deck
{
	int hand_value = 0;
	int num_cards = hand.chand.size();
	for (int i = 0; i<num_cards;i++)
	{
		char Fnum = hand.chand[i][0];
		switch (Fnum)
		{
		case 'T':
		case 'J':
		case 'Q':
		case 'K':
			hand_value+=10;
			break;
		case 'A':
			if (AceHigh)
			{
				hand_value+=11;
			}
			else
			{
				hand_value+=1;
			}
			break;

		default:

			int first = Fnum-48; //alt-key codes make this odd. hard to explain.
			hand_value+=first;
		}

	}
	return hand_value;
}