#include "vote.h"
#include "election.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//Read votes from file
	ifstream in("Votes.txt");
	election votes = read_votes(in);

	//Print votes
	for (int round = 1; votes.vote_count() != 0; ++round) {
		cout << "Round " << round << ": " << votes.vote_count() << " votes\n";

		//Rank candidates in decreasing order of number first preferences
		const auto paired_counts = votes.ranked_candidates();
		cout << "First preferences:\n";
		for (const auto& p : paired_counts)
			cout << "  Candidate " << p.first << ": " << p.second << '\n';

		//If a candidate has more than half of the first preferences, he is selected
		if (2 * paired_counts.front().second > votes.vote_count()) {
			const candidate winner = paired_counts.front().first;
			cout << "Candidate " << winner << " is selected.\n";
			return 0;
		}

		//Candidate with the least first preferences is eliminated
		const candidate loser = paired_counts.back().first;
		cout << "Candidate " << loser << " is eliminated.\n\n";
		votes.eliminate(loser);
	}
	cout << "There are no votes left.\n";
	return 0;
}