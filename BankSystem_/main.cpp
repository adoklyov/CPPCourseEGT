#include <iostream>
#include <vector>
#include <memory>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {

    //Vector of Account pointers
    vector<unique_ptr<Account>> accounts;

    //Create Account objects
    accounts.emplace_back(make_unique<SavingsAccount>(1000.0, 0.03));
    accounts.emplace_back(make_unique<CheckingAccount>(500.0, 2.0));

    //Loop through the vector, crediting and debiting
    for (auto& account : accounts) {

        account->credit(200.0);


        account->debit(150.0);

        //Downcast to SavingsAccount and credit interest
        auto savingsAccount = dynamic_cast<SavingsAccount*>(account.get());
        if (savingsAccount) {
            double interest = savingsAccount->calculateInterest();
            savingsAccount->credit(interest);
        }

        //Prints the final balance
        cout << "Final Balance: $" << account->getBalance() << endl;
    }

    return 0;
}