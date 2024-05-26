//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.4 **************

// Write a program that asks the user to enter the number of seconds as an integer
// value (use type long, or, if available, long long) and that then displays the equivalent time in days, 
// hours, minutes,and seconds. Use symbolic constants to represent
// the number of hours in the day, the number of minutes in an hour,and the number
// of seconds in a minute.The output should look like this:
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>
#include <cmath>

const int SEC_MIN = 60; // 1 min = 60 sec
const int MIN_HR = 60; // 1 hour = 60 min
const int HR_DAY = 24; // 1 day = 24 hour

int main()
{
    using namespace std;
    long seconds, temp;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    temp = seconds;

    int sec = temp%SEC_MIN;
    temp /= SEC_MIN;
    int min = temp%MIN_HR;
    temp /= MIN_HR;
    int hour = temp%HR_DAY;
    int day = temp/HR_DAY;
    
    cout << seconds << " seconds = " << day << " days, " << hour << " hours, " << min << " mins, " 
         << sec << " seconds. \n";

    return 0;
}