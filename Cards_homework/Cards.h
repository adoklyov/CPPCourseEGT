#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>

using namespace std;

class Cards
{

public:

	//Constructor
	Cards(string type, string suit);

	//Methods
	void displayCards() const;

	//Attributes
	string type;
	string suit;

};

#endif