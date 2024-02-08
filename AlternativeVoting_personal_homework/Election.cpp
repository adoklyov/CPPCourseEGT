#include "Vote.h"
#include "Election.h"
#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//Checking if the vote is spent
bool is_spent(const vote& v) {
	return v.spent();
}

//Method to remove any occurrence of the named candidate from each vote, and remove any votes that are now spent
void election::eliminate(candidate c) {
	for (vote& v : votes)
		v.discard(c);
	votes.erase(remove_if(votes.begin(), votes.end(), is_spent),
		votes.end());
}


//Sorting the candidates in the election
bool compare_counts(const pair<candidate, int>& x,
	const pair<candidate, int>& y) {
	return x.second > y.second;
}

//Returns a collection of candidates left in the election paired with the number of first preferences each has, in decreasing order of that number
vector<pair<candidate, int>> election::ranked_candidates() const {

	map<candidate, int> counts;
	for (const vote& v : votes)
		++counts[v.first_preference()];

	vector<pair<candidate, int>>
		paired_counts(counts.cbegin(), counts.cend());

	sort(paired_counts.begin(), paired_counts.end(), compare_counts);
	return paired_counts;
}

//Read the votes of an election each line is a vote, listing candidates in order of preference
election read_votes(istream& in) {
	election votes;
	string line;
	while (getline(in, line)) {
		vector<candidate> cs;
		candidate c;
		stringstream str(line);
		while (str >> c)
			cs.push_back(c);
		votes.add_vote(vote(cs));
	}
	return votes;
}