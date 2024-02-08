#include <iostream>
#include "Deck.h"


int main()
{
    //Deck object
    Deck deck;

    //Display the deck
    cout << "Base deck: " << endl;
    deck.displayDeck();

    //Shuffle the deck
    deck.raffleShuffle();
    cout << "\nShuffled deck: " << endl;
    deck.displayDeck();

    return 0;
  
}

