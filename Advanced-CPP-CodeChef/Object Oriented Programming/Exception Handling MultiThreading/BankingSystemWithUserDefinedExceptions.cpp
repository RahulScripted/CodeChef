// Complete the InsufficientFundsException class to observe how user-defined exceptions can be used in C++. This problem helps you practice creating user-defined exceptions and using them in real-world scenarios, such as a banking system, to handle specific error conditions gracefully.





#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public exception {
public:
    InsufficientFundsException(const char* message) : msg(message) {}

    // Override the what() method to provide an error message.
    const char* what() const throw() {
        return msg.c_str();
    }

private:
    string msg;
};

class BankAccount {
public:
    int accountNumber;
    string accountHolder;
    double balance;

    BankAccount(int accountNumber, const string& accountHolder, double balance)
        : accountNumber(accountNumber), accountHolder(accountHolder), balance(balance) {}

    double getBalance() const {
        return balance;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException("Insufficient funds. Withdrawal not allowed.");
        }
        balance -= amount;
    }
};

int main() {
    try {
        BankAccount account1(1001, "Alice", 1000.0);

        account1.withdraw(2000.0); // Successful withdrawal

        // Print updated balances
        cout << "Account 1 Balance: " << account1.balance << endl;
    }
    catch (const InsufficientFundsException& ex) {
        cout << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}