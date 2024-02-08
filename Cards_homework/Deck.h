#ifndef DECK_H
#define DECK_H
#include "Cards.h"

#include <vector>

class Deck
{

public:
	
	//Constructor
	Deck();

	//Methods
	void raffleShuffle();
	void displayDeck() const;


private:

	//Attributes
	vector<Cards> deck;

};

#endif