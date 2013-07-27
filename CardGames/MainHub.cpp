#include <iostream>
#include <string>
#include <stdlib.h>
//Above go standard libraries, below go self-made libraries

#include "Deck.h"
#include "Hand.h"
//#include "DrawCards.h"
#include "ValueCounter.h"

using namespace std;

#define LH 1	//Long-Hand (i.e. 'Ace of Spades' vs. 'As')
#define S 1 //Shuffle

int main()
{
	Deck deck1(LH, S);
	Hand hand1(deck1, 5);
	for (int i=0; i < hand1.chand.size(); i++)
	{
		cout<<hand1.chand[i] <<endl;
	}
	cout << hand1*5;
	//a = ValueCounter(hand1, 1);
	//cout << a;
	
	cout << endl;
	return 0;
}