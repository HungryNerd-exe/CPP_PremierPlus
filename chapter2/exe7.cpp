// Write a program that asks the user to enter an hour value and a minute value.The
// main() function should then pass these two values to a type void function that displays 
// the two values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28

// Program name : exe7.cpp
// Description  : concatenating a string
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
void print_time(int hour, int minute);

int main()
{
    using namespace std;
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    print_time(hour, minute);

    return 0;
}

void print_time(int hour, int minute){
    std::cout << "Time: " << hour << ":" << minute << std::endl;
}
// ***********************************
// Program End
// ***********************************