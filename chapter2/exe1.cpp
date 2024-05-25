// Write a C++ program that displays your name and address (or if you value your
// privacy,a fictitious name and address).

// Program name : exe1.cpp
// Description  : A C++ Program displaying name and address
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
    cout << "Enter Your Name: ";
    string name, add;
    cin >> name;
    cout << "Enter your Address : ";
    cin >> add;
    cout << "\n";
    cout << "Name: " << name << ", Address: " << add << endl;
    return 0;
}

// ***********************************
// Program End
// ***********************************