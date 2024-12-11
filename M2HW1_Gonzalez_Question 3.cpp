// CSC 134
// M2HW1-Gold (Question 3)
// Kenneth Gonzalez
// 9/15/2024

#include <iostream>
using namespace std;

int main() 
{

int pizzasOrdered, visitors, slicesPerPizza;
int slicesLeft, totalSlices;

cout << "Enter number of pizzas ordered: ";
cin >> pizzasOrdered;

cout << "Enter number of slices per pizza: ";
cin >> slicesPerPizza;

cout << "Enter number of visitors: ";
cin >> visitors;

//Calculations

totalSlices = pizzasOrdered * slicesPerPizza;
slicesLeft = totalSlices % visitors;

//Output

cout << "Total pieces of pizza: " << totalSlices << endl;
cout << "Pieces of pizza left over: " << slicesLeft << endl;

return 0;

}