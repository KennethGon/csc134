// CSC 134
// M4HW1 - Gold Part Two
// Kenneth Gonzalez
// 10/20/2024

#include <iostream>
using namespace std;

int main() {
    int multiplier;
    cout << "Enter a number from 1 to 12: ";
    cin >> multiplier;

    int i = 1;
    while (i <= 12) {
        cout << multiplier << " times " << i << " is " << (multiplier * i) << "." << endl;
        i++;
    }
    return 0;
}