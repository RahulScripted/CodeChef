// You are tasked with creating a C++ program that simulates bank transactions for a customer. Your program should handle exceptions related to different types of transactions and account balances using nested try-catch blocks.




#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount < 0) {
            throw invalid_argument("Invalid input. Please enter a valid withdrawal amount.");
        }

        if (amount > balance) {
            throw runtime_error("Insufficient balance.");
        }

        balance -= amount;
        cout << "Withdrawal successful. New balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object with predefined values
    BankAccount account(12345, 1000.0);

    try {
        // Nested try-catch blocks
        try {
            // Attempt to withdraw money from the account
            account.withdraw(1500.0);

        } catch (const runtime_error& e) {
            // Handle specific exception (Insufficient balance)
            cout << e.what() << endl;
        }

    } catch (const exception& e) {
        // Handle general exception (Invalid input)
        cout << e.what() << endl;
    } catch (...) {
        // Handle any other unknown exceptions
        cout << "An unknown error occurred." << endl;
    }

    return 0;
}
