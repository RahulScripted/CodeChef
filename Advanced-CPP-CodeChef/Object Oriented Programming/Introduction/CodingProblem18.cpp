// Create a BankAccount class that simulates a simple bank account. The class should have the following features:

// 1.  A static data member totalBalance to keep track of the total balance across all accounts.

// 2.  A constructor that takes an initial balance as a parameter and updates totalBalance accordingly.

// There are 2 BankAccounts in the Bank. Given the balance of both the accounts as input, create the object using constructor to update totalBalance and print totalBalance of Bank.




#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int balance;
    
    BankAccount(int amount) {
        totalBalance += amount;
    }
};

int BankAccount::totalBalance = 0.0;

int main() {
    int amount; 
    cin>>amount;
    BankAccount account1(amount);
    cin>>amount;
    BankAccount account2(amount);


    cout << BankAccount::totalBalance << endl;
}