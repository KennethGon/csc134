
//CSC 134
//M5LAB2 - Complete a program
//Kenneth Gonzalez
//11/3/2024



// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
#include <iostream>

using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);

void displayData(double length, double width, double area);
int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors



   double length,   // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}


//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getArea(double length, double width) {

    return length * width;
    
}

double getLength(){
    double userLength;
    cout << "Please enter your length of your rectangle.: \n";
    cin >> userLength;
    return userLength;


}

double getWidth(){
    double userWidth;
    cout << "Please enter your width of your rectangle.: \n";
    cin >> userWidth;
    return userWidth;
}

void displayData(double length, double width, double area){
    cout << "This is your area of your rectangle: " << area << endl;
    cout << "This is your width of your ractangle: " << width << endl;
    cout << "This is the length of your rectangle: " << length << endl;
}