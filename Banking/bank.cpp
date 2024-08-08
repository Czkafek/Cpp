#include <iostream>

using namespace std;

void showBalance(double balance) {
    cout << "\n" << "-------------------------------------------------------" << "\n\n";
    cout<< "Balance: " << balance << "\n";
    cout << "\n" << "-------------------------------------------------------" << "\n\n";
}

void depositMoney(double &balance) { 

    double deposit;
    cout << "Enter: ";
    cin >> deposit;

    balance += deposit;

    cout << "\n" << "-------------------------------------------------------" << "\n\n";
    cout << "Deposit successful. New balance: " << balance << "\n";
    cout << "\n" << "-------------------------------------------------------" << "\n\n";

}

void withdrawMoney(double &balance) {
    
    if(balance <= 0) {
        cout << "\n" << "-------------------------------------------------------" << "\n\n";
        cout << "You can not withdraw, to little money on account" << "\n"; 
        cout << "\n" << "-------------------------------------------------------" << "\n\n";
    }
    else {
        double withdraw;
        cout << "Enter: ";
        cin >> withdraw;
        if(balance >= withdraw) {
            balance -= withdraw;
            cout << "\n" << "-------------------------------------------------------" << "\n\n";
            cout << "Withdraw successful. New balance: " << balance << "\n";
            cout << "\n" << "-------------------------------------------------------" << "\n\n";
        }
        else {
            cout << "\n" << "-------------------------------------------------------" << "\n\n";
            cout << "Too little money on account to withdraw" << "\n";
            cout << "\n" << "-------------------------------------------------------" << "\n\n";
        }
    }

}
int main() {

    double balance = 100.00;
    int option;
    int i=0;
    while (i == 0) {
        cout << "#1 Show balance\n";
        cout << "#2 Deposit money\n";
        cout << "#3 Withdraw money\n";
        cout << "#4 Leave\n";

        cin >> option;

        switch(option) {

            case 1: {
                showBalance(balance);
                break;
            }

            case 2: {
                depositMoney(balance);
                break;
            }

            case 3: {
                withdrawMoney(balance);
                break;
            }

            case 4: {
                return 0;
            }

        }
    }




    return 0;
}