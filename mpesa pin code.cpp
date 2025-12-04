#include <iostream>
#include <string>

using namespace std;

int main()
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
    
    return 0;
}