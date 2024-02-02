#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main() {

    //Vector to store packages
    vector<Package*> packages;

    double totalCost = 0.0;

    //Adding two day package and overnight package to the vector
    TwoDayPackage* twoDayPackage = new TwoDayPackage("Ivan", "Stoyan", 2.5, 0.5, 2.0);
    OvernightPackage* overnightPackage = new OvernightPackage("Petar", "Ico", 1.5, 0.5, 1.0);
    packages.push_back(twoDayPackage);
    packages.push_back(overnightPackage);

    //Two day package
    cout << "Sender Address: " << twoDayPackage->getSenderAddress() << endl;
    cout << "Recipient Address: " << twoDayPackage->getRecipientAddress() << endl;
    double cost = twoDayPackage->calculateCost();
    cout << "Shipping Cost: $" << cost << endl << endl;
    totalCost += cost;

    //Overnight package
    cout << "Sender Address: " << overnightPackage->getSenderAddress() << endl;
    cout << "Recipient Address: " << overnightPackage->getRecipientAddress() << endl;
    cost = overnightPackage->calculateCost();
    cout << "Shipping Cost: $" << cost << endl << endl;
    totalCost += cost;

    //Total cost
    cout << "Total Shipping Cost: $" << totalCost << endl;

    return 0;
}