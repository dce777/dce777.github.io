/******************************************************************************
 cryptocurruncies 
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;         // variable holds our menu choice
    double money;       // variable to hold our money
    double converted;   // variable to hold the converted money
    
    // use cout statments to display the menu
    cout << "select from one of the following cryptocurruncies" << endl;
    cout << "\t 1.Bitcoin (BTC)" << endl;
    cout << "\t 2.Ethereum (ETH)" << endl;
    cout << "\t 3.Dogecoin (DOGE)" << endl;
    cout << "\t 4.Tether (USTC)" << endl;  
    cout << "Enter your choice (1, 2, 3, or 4):";
    cin >> choice;
    
    //variable so that menu choices are restricted to 1 - 4
    while(choice  < 1 or choice > 4)
    {
        // display an error and then re-display the menu
        cout << "ERROR: INVALID MENU CHOICE. TRY AGAIN" << endl <<endl;
        cout << "select from one of the following cryptocurruncies:" << endl;
        cout << "\t 1.Bitcoin (BTC)" << endl;
        cout << "\t 2.Ethereum (ETH)" << endl;
        cout << "\t 3.Dogecoin (DOGE)" << endl;
        cout << "\t 4.Tether (USTC)" << endl;
        cout << "Enter your choice (1, 2, 3, or 4):";
        cin >> choice;
    }
    
    // after we have validated the menu choice, get the input of our money
    cout << endl << "enter an amount of money (enter at least $0.0): $ ";
    cin >> money;
    
    // validate the input of the money
    while(money < 0)
    {
        // display an ERROR
        cout << endl <<"ERROR: INVALID AMOUNT OF MONEY ENTERED. PLEASE TRY AGAIN." << endl;
        cout << endl << "Enter an amount money (enter at least $0.00): $";
        cin >> money;
    }
    cout << setprecision(2) << showpoint << fixed; 
    cout << endl << "$" << money << " USD = ";
    cout << setprecision(6) << showpoint << fixed; 
    // use if / else if to calculate the converted money
    if(choice == 1)
        cout << (money * (1 / 38904.07)) << " BTC";
    else if(choice == 2)
        cout << (money * (1 / 2414.22)) << " ETH";
    else if(choice == 3)
        cout << (money * (1 / 0.310443)) << " DOGE";
    else
        cout << (money * (1 / 1.0005)) << " USTC";
    
    return 0;
}