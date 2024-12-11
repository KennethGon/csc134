
#include <iostream>
using namespace std;

// CSC 134
// M3T1
// Ask the user to enter the length and width of two rectangles, 
// then display the area of both.
// Finally, tell the user which one is larger.
// Kenneth Gonzalez
// 9/16/2024

    int main() {
        //set variables
        double width1, width2, length1, length2;
        double area1, area2;
   
    //Ask for user input

        cout << "M3T2 - Area of two rectangles" << endl;
        cout << "Width of first rectangle: " << endl;
        cin >> width1;
        cout << "Length of first rectangle: ";
        cin >> length1;
        cout << endl;
        cout << "Width of second rectangle: ";
        cin >> width2;
        cout << "Length of second rectangle: ";
        cin >> length2;
     
        // calc areas
        area1 = length1 * width1;
        area2 = length2 * width2;

        // print the answer

        cout << "The first area is: " << area1 << endl;
        cout << "The second area is: " << area2 << endl;

        // Tell which is larger
        if (area1 > area2) {
            cout << "The first rectangle is larger." << endl;
        }
        else if (area1 < area2) {
            cout << "The second rectangle is larger." << endl;
        }
        else {
            // area1 == area2
            cout << "The rectangles are the same size." << endl;
        }


    }