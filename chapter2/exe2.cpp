//********** Premier Plus 6th Edition **************
//********** Programming Exercise 2.2 **************

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

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