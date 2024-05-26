//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.1 **************

// Write a short program that asks for your height in integer inches and then converts
// your height to feet and inches. Have the program use the underscore character to
// indicate where to type the response.
// Also use a const symbolic constant to represent the conversion fact 

#include <iostream>

int main()
{
    using namespace std;
    const int conv_fact = 12;
    int height_inches;
    int feet, inches;

    cout << "Enter height (in inches): ____\b\b\b\b";
    cin >> height_inches;
    feet = height_inches/conv_fact;
    inches = height_inches%conv_fact;
    cout << "Height : " << feet << " ft and " << inches << " inches." << endl; 
    
    return 0;
}