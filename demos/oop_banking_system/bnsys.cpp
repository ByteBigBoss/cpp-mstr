#include <iostream>
#include <vector>

using namespace std;

class Account
{
protected:
    string owner;
    double balance;

public:
    Account(string name, double initialBalance) : owner(name), balance(initialBalance) {}

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds" << endl;
        cout << "==================================================" << endl
             << "==================================================" << endl;
    }

    string getOwner() const
    {
        return owner;
    }

    void display() const
    {
        cout << owner << "'s Account Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account
{

private:
    double interestRate;

public:
    SavingsAccount(string name, double initialBalance, double rate) : Account(name, initialBalance), interestRate(rate) {}

    void addInterest()
    {
        deposit(balance * interestRate);
    }
};

SavingsAccount *findAccountByName(const string &name, const vector<SavingsAccount *> &accounts)
{
    for (auto account : accounts)
    {
        if (account->getOwner() == name)
        {
            return account;
        }

        return nullptr;
    }
}

int main()
{
    int choice;
    string name;
    double initialBalance, rate = 0.05, amount;
    vector<SavingsAccount *> accounts;

    while (true)
    {
        cout << "Welcome to CPP Banking!" << endl;
        cout << "What you will do today?" << endl
             << "1. Open new Saving Account" << endl
             << "2. Deposit" << endl
             << "3. Withdraw" << endl
             << "4. Check Balance" << endl
             << "5. Quit" << endl

             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Open new Savings Account

            cout << "Please Enter Your Details To Open New Saving Account" << endl;
            cout << "Enter Your Name: ";
            cin >> name;
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;

            cout << "Opening a new Saving Account..." << endl;
            accounts.push_back(new SavingsAccount(name, initialBalance, rate));
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            cout << "Your Account Succefully Opened!" << endl;
            accounts.back()->display();
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            break;

        case 2:
            // Deposit
            cout << "Enter Account Name: ";
            cin >> name;
            if (SavingsAccount *account = findAccountByName(name, accounts))
            {
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                account->deposit(amount);
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                cout << "Successfully $" << amount << " Amount Deposited!" << endl;
                account->display();
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            else
            {
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                cout << "Account not found!" << endl;
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            break;

        case 3:
            // Withdraw
            cout << "Enter Account Name: ";
            cin >> name;
            if (SavingsAccount *account = findAccountByName(name, accounts))
            {
                cout << "Enter Withdrawal Amount: ";
                cin >> amount;
                account->withdraw(amount);
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                cout << "Successfully $"<< amount << " Amount Withdrawed!" << endl;
                account->display();
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            else
            {
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                cout << "Account not found!" << endl;
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            break;

        case 4:
            // Check Balance
            cout << "Enter Account Name: ";
            cin >> name;
            if (SavingsAccount *account = findAccountByName(name, accounts))
            {
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                account->display();
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            else
            {
                cout << "==================================================" << endl
                     << "==================================================" << endl;
                cout << "Account not found!" << endl;
                cout << "==================================================" << endl
                     << "==================================================" << endl;
            }
            break;
        case 5:
            // Quit
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            cout << "Exiting the application..." << endl;
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            // clean up dynamic memory
            for (auto account : accounts)
            {
                delete account;
            }
            return 0;
        default:
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            cout << "Invalid choice" << endl;
            cout << "==================================================" << endl
                 << "==================================================" << endl;
            break;
        }
    }
}