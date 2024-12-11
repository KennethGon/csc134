#include <iostream>
using namespace std;

// M6LAB1 
// Kenneth Gonzalez
// 11/13

// constants
const int NUM_ROUNDS = 3;
const int RED = 1; // live
const int BLACK = 0; // blank

int main() {
    int chamber[] = {RED, BLACK, RED};
    //cout << chamber << endl;

    for (int round: chamber) {
        if (round == RED) {
        cout << round << endl;

        }
    }
    cout << endl;
}