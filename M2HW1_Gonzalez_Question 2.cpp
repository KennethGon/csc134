// CSC 134
// M2HW1-Gold (Question 2)
// Kenneth Gonzalez
// 9/15/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() {


// set up variables
string name;
int length;
int width;
int height; 
int volume;

// the price related variables
const double COST_PER_CU_FT = 0.3;
const double PRICE_PER_CU_FT = 0.52;
double cost;
double customer_price;
double profit;

// say hi

cout << "Hi, what's your name? ";
cin >> name; 
cout << "Nice to meet you, " << name << endl;

// Ask user questions
cout << "Let's get the crate dimensions (in feet)." << endl;
cout << "What's the length? ";
cin >> length;
cout << "What's the width? ";
cin >> width;
cout << "Finally, what's the height? ";
cin >> height; 

// Calculations
volume = length * width * height;

// cost calculations
cost = volume * COST_PER_CU_FT;
customer_price = volume * PRICE_PER_CU_FT;
profit = customer_price - cost;

//TODO calculations
cout << setprecision(2) << fixed;
cout << "Crate is: " << width << " x " << length << " x " << height << endl;
cout << "Total volume is: " << volume << " cubic feet." << endl;
cout << "Cost to manufacture is $" << cost << endl;
cout << "Customer is charged $" << customer_price << endl;
cout << "Total profit is $" << profit << endl;

return 0;

}