
// CSC 134
// M7T1 - Restaurant Rating
// Kenneth Gonzalez
// 12/10/24

// Use Restaurant class to store user ratings
#include <iostream>
using namespace std;

class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
    // constructor
    Restaurant(string n, double r) {
        name = n;
        rating = r;
    }
    // getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // print a formatted entry
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create a restaurant
    Restaurant lunch_place = Restaurant("Mi Casita", 3.5);
    // the constructor saves us from having to use 3 lines to set up
    //Restaurant lunch_place;
    //lunch_place.setName("Place");
    Restaurant breakfast_place = Restaurant("Waffle House", 2.0);
    Restaurant dinner_place = Restaurant("Olive Garden", 4.5);

    cout << "Review info" << endl;
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
    // writing printInfo() saves me typing all the cout code every time
    //cout << breakfast_place.getName() << " ";
    //cout << breakfast_place.getRating() << "/5 stars" << endl;
    cout << "Lunch:" << endl;
    lunch_place.printInfo();
    //cout << lunch_place.getName() << " ";
    //cout << lunch_place.getRating() << "/5 stars" << endl;
    cout << "Dinner:" << endl;
    dinner_place.printInfo();
    return 0;

}