#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

class Deck
{
public:
	vector<string> cdeck;
	Deck(bool Long=0, bool shuffle=1);
	void Shuffle();

};  