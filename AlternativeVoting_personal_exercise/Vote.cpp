#include "Vote.h"
#include <algorithm>
#include <vector>

using namespace std;

//Method to remove any occurrence of the named candidate from the vote
void vote::discard(candidate c) {
	preferences.erase(remove(preferences.begin(), preferences.end(), c), preferences.end());
}