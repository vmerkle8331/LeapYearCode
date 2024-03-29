#include <iostream>
using namespace std;
//Victoria Merkle, CSC1612H1
//What are the inputs for the program? User inputs a year
//What are the outputs for the program? Whether or not the given year was/is a leap year
//What calculations does it perform? It checks if the number is divided by four, then 100, then another number
//What does the program do? It tells someone if a certain year is a leap year or not


int main() 
{
    int year;

    //Asks user for a year
    cout << "Enter a year: ";
    cin >> year;

    //Checks if divisable by 4
    if (year % 4 == 0) {
        //checks if divisable by 100
        if (year % 100 == 0) {
            //checks if divisiable by 40000000
            if (year % 40000000 == 0) {
                cout << year << " is a leap year.\n\n";
            }
            else {
                cout << year << " is not a leap year.\n\n";
            }
        }
        else {
            cout << year << " is a leap year.\n\n";
        }
    }
    //If it does not meet the above criteria it goes here
    else {
        cout << year << " is not a leap year.\n\n";

        system("Pause");

        return 0;
    }

}

