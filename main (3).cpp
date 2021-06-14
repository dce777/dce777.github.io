/******************************************************************************
This is my first C++ file
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;            // variable to hold a user's age
    string name;        // variable to hold a user's name
    string color;       // variable to hold a user's favorite color
    
    // prompt the user for the name
    cout << "What is your name?";
    getline(cin, name);      // allows for the user to enter their name with spaces
    
    // prompt the user for their age
    cout << "How old are you?";
    cin >> age;     // allows for the user to enter their age
    
    // display the user's name and age
    cout << endl <<  "Name: " << name << endl;
    cout << "Age: " << age << endl;
    
    // prompt the user for their favorite color
    cout << "What is your favorite color?";
    cin >> color;     // allows for the user to enter their favorite color
    
    // display the user's favorite color
    cout << "Favorite Color: " << color << endl;
    
    return 0;
}
