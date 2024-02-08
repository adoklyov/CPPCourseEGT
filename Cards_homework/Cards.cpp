#include "Cards.h"


//Constructor
Cards::Cards(string type, string suit)
{
	this->type = type;
	this->suit = suit;

};

//Methods

//Method to display the cards
void Cards::displayCards() const
{
	cout << type << " of " << suit << endl;
}