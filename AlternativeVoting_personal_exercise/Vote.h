#ifndef VOTE_H
#define VOTE_H

#include <vector>

using namespace std;


typedef unsigned int candidate;


class vote {

	//Vector of candidate preferences
	vector<candidate> preferences;

public:

	//Constructor
	vote(const vector<candidate>& prefs) : preferences(prefs) {}

	//Method that returns true if the vote has no preferences left
	bool spent() const
	{
		return preferences.empty();
	}

	//Method that returns the candidate that is the first preference of the vote
	candidate first_preference() const { return preferences.front(); }

	//Method that discards the first preference of the vote
	void discard(candidate c);

};

#endif