// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:

// Enter your age: 29
// Your age in months is 384.

// Program name : exe4.cpp
// Description  : Age in months
// Notes        :
// Date         : 25-May-2024

// ***********************************
// headers
// ***********************************
#include <iostream>

// ***********************************
// global variables
// ***********************************

// ***********************************
// function declaration
// ***********************************


int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age in months : "<< age * 12;

    return 0;
}

// ***********************************
// Program End
// ***********************************