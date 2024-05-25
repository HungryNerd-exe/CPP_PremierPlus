// Write a program that has main() call a user-defined function that takes a distance
// in light years as an argument and then returns the distance in astronomical units.
// The program should request the light year value as input from the user and display
// the result,as shown in the following code:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.

// Program name : exe6.cpp
// Description  : light years to astronomical units
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
double ly_astro(double ly); 

int main()
{
    using namespace std;
    double lightyears;

    cout << "Enter the number of light years: ";
    cin >> lightyears;
    cout << lightyears << " light years = " << ly_astro(lightyears) << " astronomical units.";
    return 0;
}

double ly_astro(double ly)
{
    return ly * 63240;
}
// ***********************************
// Program End
// ***********************************