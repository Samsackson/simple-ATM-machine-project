#include<IOSTREAM>
using namespace std;

class ATM {
private:
    float balance;
public:
    ATM(float initial_balance) {
        balance = initial_balance;
    }

    void checkBalance() {
        cout << "Your balance is: ksh" << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "ksh" << amount << " has been deposited." << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "ksh" << amount << " has been withdrawn." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
};

int main() {
    float initial_balance;
    cout << "Enter initial balance: ksh";
    cin >> initial_balance;

    ATM atm(initial_balance);

    int choice;
    float amount;

    do {
        cout << "\nATM Menu: " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ksh";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ksh";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
#include<iostream>
using namespace std;
class ATM;
private:
    float balance;
public:
    ATM(float initial_balance) 
	{
        balance = initial_balance;
    }

    void checkBalance() {
        cout << "Your balance is: ksh" << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "ksh" << amount << " has been deposited." << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "ksh" << amount << " has been withdrawn." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }	





int main() {
    float initial_balance;
    cout << "Enter initial balance: ksh";
    cin >> initial_balance;

    ATM atm(initial_balance);

    int choice;
    float amount;

    do {
        cout << "\nATM Menu: " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ksh";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ksh";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
#include <iostream>
using namespace std;

class ATM {
private:
    float balance;
public:
    ATM(float initial_balance) {
        balance = initial_balance;
    }

    void checkBalance() {
        cout << "Your balance is: ksh" << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "ksh" << amount << " has been deposited." << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "ksh" << amount << " has been withdrawn." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
};

int main() {
    float initial_balance;
    cout << "Enter initial balance: ksh";
    cin >> initial_balance;

    ATM atm(initial_balance);

    int choice;
    float amount;

    do {
        cout << "\nATM Menu: " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ksh";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ksh";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}