
#include <iostream>
using namespace std;

// CSC 134
// M6T1 - Arrays
// Kenneth Gonzalez
// 11/11/2024

// global constant 
const int NUM_DAYS = 5; 

void partOne();
void partTwo();

int main() {
    partOne();
    partTwo();

}

void partOne() {


    // set up varibales
    int cars[NUM_DAYS];
    double total = 0;
    int todays_count = 0;
    double  average = 0;
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ": ";
        cin >> todays_count; 
        cars[day] = todays_count;
        total += todays_count;
 }
 
 average = total / NUM_DAYS;
 cout << "For all " << NUM_DAYS << " days:" << endl;
 for (int day = 1; day <= NUM_DAYS; day++) {
    cout << cars[day] << ",";
 }
 cout << endl;
 cout << "Total cars: " << total << endl;
 cout << "Average: " << average << endl;


}


void partTwo() {


    // set up varibales
    int cars[NUM_DAYS];
    double total = 0;
    int todays_count = 0;
    double  average = 0;
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ": ";
        cin >> todays_count; 
        cars[day] = todays_count;
        total += todays_count;
 }
 
 average = total / NUM_DAYS;
 cout << "For all " << NUM_DAYS << " days:" << endl;
 for (int day = 1; day <= NUM_DAYS; day++) {
    cout << cars[day] << ",";
 }
 cout << endl;
 cout << "Total cars: " << total << endl;
 cout << "Average: " << average << endl;


}