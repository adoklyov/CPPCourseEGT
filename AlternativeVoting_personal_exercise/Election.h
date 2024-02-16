#ifndef ELECTION_H
#define ELECTION_H

#include "Vote.h"
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class election {

	//Remaining unspent votes
	vector<vote> votes;

public:

	//Methods

	//Method to add a vote to the collection
	void add_vote(const vote& v)
	{
		votes.push_back(v);
	}

	//Method to return the number of votes currently left
	int vote_count() const
	{
		return votes.size();
	}

	//Method to remove any occurrence of the named candidate from each vote and remove any votes that are now spent
	void eliminate(candidate c);

	//Returns a collection of candidates left in the election paired with the number of first preferences each has, in decreasing order of that number
	vector<pair<candidate, int>> ranked_candidates() const;
};

//Read the votes of an election and each line is a vote, listing candidates in order of preference
election read_votes(istream& in);

#endif