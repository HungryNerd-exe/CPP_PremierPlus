//********** Premier Plus 6th Edition **************
//********** Programming Exercise 2.4 **************

// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:

// Enter your age: 29
// Your age in months is 384.

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age in months : "<< age * 12;

    return 0;
}
