// CSC 134
// M2HW1-Gold
// Kenneth Gonzalez
// 9/15/2024

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
// Declare variables
string name;
double startingBalance, withdrawal, deposit;
int accountNumber;

cout << "Enter your name: ";
getline(cin, name);

cout << "Enter starting account balance: $";
cin >> startingBalance;

cout << "Enter amount of deposit: $";
cin >> deposit;

cout << "Enter amount of withdrawal: $";
cin >> withdrawal;

double finalBalance = startingBalance + deposit - withdrawal;

cout << "Name on the account: " << name << endl;
cout << "Account number: " << accountNumber << endl;
cout << "Final account balance: $" << fixed << setprecision(2) << finalBalance << endl;

return 0;



}