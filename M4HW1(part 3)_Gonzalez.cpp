// CSC 134
// M4HW1 - Gold Part Three
// Kenneth Gonzalez
// 10/20/2024

#include <iostream>
using namespace std;

int main() {
    int multiplier;

do {
    cout << "Enter a number form 1 to 12: ";
    cin >> multiplier;

    if (multiplier < 1 || multiplier > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12." << endl;

    }
} while (multiplier < 1 || multiplier >> 12);

int i = 1;
while (i <= 12) {
    cout << multiplier << " times " << i << " is " << (multiplier * i) << "." << endl;
    i++;
}
return 0;
}