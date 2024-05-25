// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

// Program name : exe2.cpp
// Description  : Convert distance in furlongs to yards
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
    // one furlong = 220 yards
    using namespace std;
    int furlong;
    cout << "Enter the distance (in furlongs): ";
    cin >> furlong;
    cout << "Distance (yards): " << 220 * furlong << endl;
    return 0;
}

// ***********************************
// Program End
// ***********************************