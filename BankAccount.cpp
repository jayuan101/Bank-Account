#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    long long accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, long long number, double initialBalance)
        : accountHolderName(name), accountNumber(number), balance(initialBalance) {}

    // Deposit money into the account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
    }

    // Withdraw money from the account
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        }
    }

    // Get the current balance
    double getBalance() const {
        return balance;
    }

    // Display account information
    void displayAccountInfo() const {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a bank account
    BankAccount myAccount("John Doe", 123456789, 1000.0);

    // Display initial account information
    myAccount.displayAccountInfo();

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display updated account information
    myAccount.displayAccountInfo();

    return 0;
}