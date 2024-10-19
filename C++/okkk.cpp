#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string accountNumber, string accountHolderName, double initialBalance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = initialBalance;
    }

    // Deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    // Withdraw money from the account
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance <<endl;
        } else {
            cout << "Insufficient balance. Current balance: $" << balance << endl;
        }
    }

    // Get the account balance
    double getBalance() {
        return balance;
    }
};

int main() {
    string accountNumber, accountHolderName;
    double initialBalance;

    // Initialize the bank account
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account holder name: ";
    cin >> accountHolderName;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(accountNumber, accountHolderName, initialBalance);

    int choice;
    double amount;

    while (true) {
        cout << "\nBanking Menu:" << endl;
        cout << "1. Deposit" <<endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                cout << "Account Balance: $" << account.getBalance() << endl;
                break;

            case 4:
                cout << "Thank you for using the mini banking system. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
