#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(int argc, char** argv)
{
	 string mpesaPin;
    
    // Prompt user to enter M-Pesa PIN
    cout << "Enter your M-Pesa PIN to open the bank account: ";
    cin >> mpesaPin;
    
    // Check if PIN is correct
    if (mpesaPin == "2024") { // Replace "your_mpesa_pin_here" with the actual PIN
        cout << "Bank account opened successfully!" << endl;
    } else {
        cout << "Incorrect M-Pesa PIN. Unable to open bank account." << endl;
    }
	std: cout << "Welcome to Samsackson Banking syatem" << std::endl;
	// Define a structure for bank account
struct BankAccount {
    string accountNumber;
    string accountHolderName;
    double balance;
};
 {
    BankAccount newAccount;
    cout << "\nEnter Account Number: ";
    cin >> newAccount.accountNumber;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, newAccount.accountHolderName);
    cout << "Enter Initial Balance: ";
    cin >> newAccount.balance;
    
    cout << "Account created successfully." << endl;
}

	

 
    cout << "\nList of Accounts:" << endl;
     {
    string accountNumber;
    cout << "\nEnter Account Number to Edit: ";
    cin >> accountNumber;
	 }
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
{
    BankAccount account;

    // Sample transactions
    

    cout << "Select duration for mini-statement:\n";
    cout << "1. One month\n";
    cout << "2. Three months\n";
    cout << "3. Six months\n";

    int choice;
    cin >> choice;
 }



 

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
                cout << "Thank you for using Samsackson Banking system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    
    
	 return 0;
}
	 