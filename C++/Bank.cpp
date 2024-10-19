#include <iostream>
using namespace std;

class account
{
private:
    char name[30];
    float balance;
    static int account_size; // Move account_size to the class as a static member
    int account_number;

public:
    account()
    {
        // Default constructor; no need to assign account number here
        balance = 0;
    }

    void deposit()
    {
        float da;
        cout << "Enter Amount To Deposit: " << endl;
        cin >> da;
        balance += da;
        cout << da << " RS Credit" << endl;
        cout << "Total Amount: " << balance << " RS" << endl;
    }

    void new_account()
    {
        cout << "Enter Name: " << endl;
        cin >> name;
        // Assign account number only when creating a new account
        account_number = 100100 + account_size;
        cout << "Account Number: " << account_number << endl;
        cout << "Deposit Amount" << endl
             << "1. Yes" << endl
             << "2. No" << endl;

        int choice;
        cin >> choice;
        if (choice == 1)
        {
            deposit();
        }
        account_size++;
    }

    int search(int accNumber)
    {
        if (account_number == accNumber)
        {
            return 1;
        }

        cout << "No Record Found!!!" << endl;
        return 0;
    }

    void show_details()
    {
        cout << "Name: " << name << endl;
        cout << "Total Amount: " << balance << " RS" << endl;
    }

    void withdraw()
    {
        float wa;
        cout << "Enter Amount: " << endl;
        cin >> wa;
        if(wa<=balance)
        {   balance -= wa;
            cout << "AMOUNT DEBITED: " << wa << endl;
            cout << "CURRENT BALANCE: " << balance <<" RS"<< endl;
        }
        else
        {   cout<<"You have NOT ENOUGH MONEY!!!! "<<endl;
            cout << "CURRENT BALANCE: " << balance <<" RS"<< endl;
        }
    }

    // Public method to access account_size
    int getAccountSize()
    {
        return account_size;
    }
};

// Define the static member outside of the class
int account::account_size = 0;

int main()
{
    int choice, i;
    account user[100]; // Declare an array of account objects

    do
    {
        cout << "----------WELCOME TO MY BANK----------" << endl;
        cout << "1. Open New Account " << endl
             << "2. See Details " << endl
             << "3. Deposit Amount " << endl
             << "4. Withdraw Amount " << endl
             << "5. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "----------You Choose Open New Account---------- " << endl;
            user[0].new_account();
            break;
        case 2:
            cout << "----------You Choose See Details---------- " << endl;
            cout << "Enter Account Number " << endl;
            cin >> i;
            if (user[0].search(i) == 1)
            {
                user[0].show_details();
            }
            break;
        case 3:
            cout << "----------You Choose Deposit Amount---------- " << endl;
            cout << "Enter Account Number " << endl;
            cin >> i;
            if (user[0].search(i) == 1)
            {
                user[0].deposit();
            }
            break;
        case 4:
            cout << "----------You Choose Withdraw Amount---------- " << endl;
            cout << "Enter Account Number " << endl;
            cin >> i;
            if (user[0].search(i) == 1)
            {
                user[0].withdraw();
            }
            break;
        case 5:
            cout << "Have A Nice Day :)" << endl;
            break;
        default:
            cout << "ENTER VALID CHOICE !!!" << endl;
        }

    } while (choice != 5);

    return 0;
}
