// CSC 134
// M3HW1 - Gold
// Kenneth Gonzalez
// 10/6/2024

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {


// Questin 1
cout << "Question 1" << endl;
cout << "Hello, I'm a C++ program!\n";
cout << "Do you like me? Please type yes or no." << endl;
string answer;
cin >> answer;

if (answer == "yes") {
    cout << "That's great! I'm sure we'll get along.\n";
} else if (answer == "no") {
    cout << "Well, maybe you'll learn to like me later.\n";
} else {
    cout << "If you're not sure... that's OK.\n";
}

// Question 2
cout << "Question 2" << endl;
double mealPrice, tax = 0.07, tip = 0.0, total;
int dineOption;

cout << "Enter the price of the meal: ";
cin >> mealPrice;
cout << "Please enter 1 if the order is dine-in, 2 if it is takeaway: ";
cin >> dineOption;

double taxAmount = mealPrice * tax;
if (dineOption == 1) {
    tip = mealPrice * 0.15;
}

total = mealPrice + taxAmount + tip;
cout << "Receipt:\n";
cout << "Meal Price: $" << mealPrice << endl;
cout << "Tax: $" << taxAmount << endl;
if (dineOption == 1) {
    cout << "Tip: $" << tip << endl;
}

cout << "Total: $" << total << endl;

// Question 3
cout << "Question 3" << endl;
cout << "You are in a haunted mansion being chased by a ghost. You find two doors.\n";
cout << "The door to the left leads to the attic. The door to the right leads to the basement.\n";
cout << "Do you go left or right? (left/right): ";
string choice1;
cin >> choice1;

if (choice1 == "left") {
    cout << "In the attic, you find a treasure chest. Do you open it or leave it closed? (open/leave): ";
    string choice2;
    cin >> choice2;

    if (choice2 == "leave") {
        cout << "The ghost catches up to you and takes over your body! Game Over.\n";
    } else if (choice2 == "open") {
        cout << "The chest contained an amulet which scares the ghost away. You win!\n";
    } else {
        cout << "Invalid choice. Game Over.\n";
    }
} else if (choice1 == "right") {
    cout << "You enter the basement, but there is no exit. The ghost catches up to you and takes over your body! Game Over.\n";
} else {
    cout << "Invalid choice. Game Over.\n";
}

// Question 4
cout << "Question 4" << endl;
int num1 = rand() % 10;
int num2 = rand() % 10;

cout << "What is " << num1 << " plus " << num2 << "?" << endl;
int userAnswer, correctAnswer = num1 + num2;
cin >> userAnswer;

if (userAnswer == correctAnswer) {
    cout << "Correct!";
} else {
    cout << "Incorrect. The correct answer is " << correctAnswer << ".\n";

}

return 0;

}


