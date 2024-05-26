//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.3 **************

// Write a program that asks the user to enter a latitude in degrees, 
// minutes,and seconds and that then displays the latitude in decimal format.
// There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; 
// represent these values with symbolic constants.
// You should use a separate variable for each input value.A sample
// run should look like this:
// Enter a latitude in degrees, minutes, and seconds:
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degree

#include <iostream>
const int SEC_MIN = 60;
const int MIN_DEG = 60;
int main()
{
    using namespace std;
    int deg, min, sec;
    cout << "Enter a latitude in degrees, minutes, and seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    double lat_deg = (deg + (min + double(sec)/SEC_MIN) / MIN_DEG);
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << lat_deg << " degree" << endl;
    return 0;
}