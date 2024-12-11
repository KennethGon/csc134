// CSC 134
// M8HW - Mini-Project
// Kenneth Gonzalez
// 12/11/24

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool coinFlip() {
    // Simulate a coin flip: returns true for heads and false for tails
    return rand() % 2 == 0;
}

void playGame() {
    cout << "Welcome to the Coin Flip MMO RPG!" << endl;
    cout << "Defeat enemies by winning coin flips. If you miss three flips in a row, you lose." << endl;

    int enemiesDefeated = 0;
    int consecutiveMisses = 0;
    int totalFlips = 0;
    int successfulFlips = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        cout << "Press Enter to flip the coin...";
        cin.ignore();

        bool flipResult = coinFlip();
        totalFlips++;

        if (flipResult) {
            cout << "Heads! You defeated an enemy!" << endl;
            enemiesDefeated++;
            successfulFlips++;
            consecutiveMisses = 0;
        } else {
            cout << "Tails! You missed." << endl;
            consecutiveMisses++;
        }

        if (consecutiveMisses == 3) {
            cout << "You missed three times in a row! Game over." << endl;
            break;
        }

        cout << "Enemies defeated: " << enemiesDefeated << endl;
    }

    double luckPercentage = (totalFlips > 0) ? (static_cast<double>(successfulFlips) / totalFlips) * 100 : 0;
    cout << "Final Score: " << enemiesDefeated << " enemies defeated." << endl;
    cout << "You were lucky " << luckPercentage << "% of the time during this run." << endl;
}

int main() {
    playGame();
    return 0;
}