// CSC 134
// M5HW1 - Functions in Use
// Kenneth Gonzalez
// 11/6/2024

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Function prototypes
void calculateAverageRainfall();
void calculateBlockVolume();
void numberToRomanNumeral();
void geometryCalculator();
void calculateDistanceTraveled();

int main() {
    int choice;

    do {
        cout << "\nMain Menu:\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Block Volume\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1: calculateAverageRainfall(); break;
            case 2: calculateBlockVolume(); break;
            case 3: numberToRomanNumeral(); break;
            case 4: geometryCalculator(); break;
            case 5: calculateDistanceTraveled(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Please select from 1-6.\n";
        }
    } while (choice != 6);

    return 0;
}

// Function definitions

void calculateAverageRainfall() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.\n";
}

void calculateBlockVolume() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "All dimensions must be positive.\n";
        return;
    }

    double volume = width * length * height;
    cout << "The volume of the block is " << volume << ".\n";
}

void numberToRomanNumeral() {
    int number;

    cout << "Enter a number (1-10): ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Number must be between 1 and 10.\n";
        return;
    }

    cout << "The Roman numeral version of " << number << " is ";
    switch (number) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }
    cout << ".\n";
}

void geometryCalculator() {
    int choice;
    cout << "Geometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            if (radius < 0) {
                cout << "The radius cannot be less than zero.\n";
                return;
            }
            double area = M_PI * radius * radius;
            cout << "The area of the circle is " << area << ".\n";
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Length and width must be positive.\n";
                return;
            }
            double area = length * width;
            cout << "The area of the rectangle is " << area << ".\n";
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Base and height must be positive.\n";
                return;
            }
            double area = 0.5 * base * height;
            cout << "The area of the triangle is " << area << ".\n";
            break;
        }
        case 4: break;
        default: cout << "Invalid choice.\n";
    }
}

void calculateDistanceTraveled() {
    double speed, hours;

    cout << "Enter speed (mph): ";
    cin >> speed;
    cout << "Enter time (hours): ";
    cin >> hours;

    if (speed < 0 || hours < 1) {
        cout << "Speed must be positive and time must be at least 1.\n";
        return;
    }

    cout << "Hour\tDistance Traveled\n";
    cout << "-------------------------\n";
    for (int i = 1; i <= hours; ++i) {
        cout << i << "\t" << speed * i << "\n";
    }
}