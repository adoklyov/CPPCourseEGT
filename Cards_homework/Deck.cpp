#include "Deck.h"

//Constructor
Deck::Deck()
{
	vector<string> suits = { "Hearts", "Diamonds", "Clubs", "Spades" };
	vector<string> types = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };

	for (const auto& suit : suits)
	{
		for (const auto& type : types)
		{
			deck.emplace_back(Cards(suit, type));
		}
	}
}

//Methods

//Method to shuffle the deck
void Deck::raffleShuffle()
{
	vector<Cards> newDeck;
	vector<Cards> firstHalf(deck.begin(), deck.begin() + deck.size() / 2);;
	vector<Cards> secondHalf(deck.begin() + deck.size() / 2, deck.end());

	auto firstHalfIt = firstHalf.begin();
	auto secondHalfIt = secondHalf.begin();

	while (firstHalfIt != firstHalf.end() && secondHalfIt != secondHalf.end()) {
		if (firstHalfIt != firstHalf.end() || secondHalfIt != secondHalf.end()) {
			newDeck.push_back(*firstHalfIt++);
		}
		if (secondHalfIt != secondHalf.end()) {
			newDeck.push_back(*secondHalfIt++);
		}
	}

	deck.swap(newDeck);
}

//Method to print the deck
void Deck::displayDeck() const
{
	for (const auto& card : deck)
	{
		card.displayCards();
	}
}