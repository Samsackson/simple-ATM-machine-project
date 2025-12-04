#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(int argc, char** argv)
{
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

    
    
	 return 0;
}
	 


