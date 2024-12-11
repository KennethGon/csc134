//CSC 134
// M5T1 - Basic Functions
// Gonzalez
//10/28/2024

// function prototypes
#include <iostream> // Include for cin and cout

using namespace std; // Use the standard namespace

// Function declarations
void say_hello();
int give_the_answer();
int double_an_int(int number);
void order_food();
void select_room();

// main
int main() {
    cout << "Hello from main" << endl;
    say_hello();
    
    cout << "The magic number is: ";
    int number = give_the_answer();
    cout << number << endl;

    int twotimes = double_an_int(number);
    cout << "Double that is: " << twotimes << endl;

    order_food();
    select_room();

    return 0;
}

// Function definitions
void say_hello() {
    cout << "Hello from say_hello()" << endl;
}

int give_the_answer() {
    int answer = 42;
    return answer;
}

int double_an_int(int number) {
    int twotimes = number * 2;
    return twotimes;
}

void order_food() {
    cout << "Welcome to the food ordering system!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Pizza\n2. Burger\n3. Salad" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You ordered Pizza!" << endl;
            break;
        case 2:
            cout << "You ordered Burger!" << endl;
            break;
        case 3:
            cout << "You ordered Salad!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}

void select_room() {
    cout << "Room selection system:" << endl;
    cout << "Please choose a room type:" << endl;
    cout << "1. Single\n2. Double\n3. Suite" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected a Single room." << endl;
            break;
        case 2:
            cout << "You selected a Double room." << endl;
            break;
        case 3:
            cout << "You selected a Suite." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}