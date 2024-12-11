
// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Kenneth Gonzalez
// 10/21/2024


#include <iostream>

using namespace std;



/*

This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_go_to_bed();
void choice_order_food();
void choice_watch_tv();
void choice_take_shower();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    // Load up the main menu
    main_menu();
    // End of the game
    cout << "Thanks for playing!" << endl;
    return 0; // Finished with no errors
}

void main_menu() {
    // Main menu options
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        choice_front_door();
    } else if (choice == 2) {
        choice_back_door();
    } else if (choice == 3) {
        choice_go_home();
    } else if (choice == 4) {
        cout << "Ok, quitting game" << endl;
        return; // Exit back to main()
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); // Clear invalid input
        main_menu();  // Try again
    }
}

void choice_front_door() {
    cout << "You approach the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "Invalid choice. Let's try again." << endl;
        choice_front_door();
    }
}

void choice_back_door() {
    cout << "You sneak around to the back of the house." << endl;
    cout << "The back door is slightly ajar. Do you:" << endl;
    cout << "1. Enter cautiously" << endl;
    cout << "2. Run back to the front" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        cout << "You step inside and find an old chest. Inside is treasure! You win!" << endl;
        cout << "*** Game Over ***" << endl;
    } else if (choice == 2) {
        cout << "You run back to the front, but the house vanishes into thin air!" << endl;
        cout << "*** Game Over ***" << endl;
    } else {
        cout << "Invalid choice. Let's try again." << endl;
        choice_back_door();
    }
}

void choice_go_home() {
    cout << "You decide to go home." << endl;
    cout << "Safe at home, do you:" << endl;
    cout << "1. Order some food" << endl;
    cout << "2. Go to bed" << endl;
    cout << "3. Watch TV" << endl;
    cout << "4. Take a shower" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        choice_order_food();
    } else if (choice == 2) {
        choice_go_to_bed();
    } else if (choice == 3) {
        choice_watch_tv();
    } else if (choice == 4) {
        choice_take_shower();
    } else {
        cout << "Invalid choice. Let's try again." << endl;
        choice_go_home();
    }
}

void choice_order_food() {
    cout << "You order some delicious pizza. The delivery driver says: 'That house you were at is haunted.' You shiver and enjoy your pizza anyway." << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_go_to_bed() {
    cout << "You go to bed. As you fall asleep, you hear faint knocking on your window. Sweet dreams!" << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_watch_tv() {
    cout << "You watch a horror movie. It's eerily similar to the house you just left. Coincidence?" << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_take_shower() {
    cout << "You take a relaxing shower. The steam fogs up the mirror, and you see 'GET OUT' written on it. Creepy!" << endl;
    cout << "*** Game Over ***" << endl;
}