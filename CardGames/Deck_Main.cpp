#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>

#include "Deck.h"

using namespace std;

Deck::Deck(bool Long, bool shuffle)
{
	vector<string> u_c(5);
	vector<string> s(5);
	if (Long)
	{
	string unique_cards[5] = {"Ten", "Jack", "Queen", "King", "Ace"};
	string suits[5] = {"Spades", "Clubs", "Hearts", "Diamonds", ""};
	for (int i=0;i<5;i++)
	{
		u_c[i]=unique_cards[i];
		s[i]=suits[i];
	}
	}
	else
	{
		string unique_cards[5] = {"T", "J", "Q", "K", "A"};
		string suits[5] = {"s", "c", "h", "d", ""};
	for (int i=0;i<5;i++)
	{
		u_c[i]=unique_cards[i];
		s[i]=suits[i];
	}
	}
	vector<string> deck(52);
	int count = 0;
	for (int i = 0; i<4; i++)
	{
		for (int a=2; a<10;a++)
		{
			stringstream CC; //Current Card
			if (Long)
			{
				CC << a << " of " << s[i];
			}
			else
			{
				CC << a << s[i];
			}
			string CCn = CC.str();
			deck[count] = CCn;
			count++;
		}
		for (int a=0;a<5;a++)
		{
			stringstream CC;
			if (Long)
			{
				CC << u_c[a] << " of " << s[i];
			}
			else
			{
				CC << u_c[a] << s[i];
			}
			string CCn = CC.str();
			deck[count] = CCn;
			count++;
		}
	}
	cdeck = deck;
	if (shuffle)
	{
		Shuffle();
	}
}