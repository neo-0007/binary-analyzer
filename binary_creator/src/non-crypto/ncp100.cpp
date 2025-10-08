#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Balance: " << balance << endl;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            cout << "New Balance: " << balance << endl;
            break;
        case 3:
            cout << "Enter withdraw amount: ";
            cin >> amount;
            if (amount > balance)
                cout << "Insufficient funds!\n";
            else {
                balance -= amount;
                cout << "New Balance: " << balance << endl;
            }
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
