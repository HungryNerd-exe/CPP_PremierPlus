//********** Premier Plus 6th Edition **************
//********** Programming Exercise 2.5 **************


// Write a program that has main() call a user-defined function that takes a Celsius
// temperature value as an argument and then returns the equivalent Fahrenheit value.
// The program should request the Celsius value as input from the user and display
// the result,as shown in the following code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// For reference, here is the formula for making the conversion:
// Fahrenheit = 1.8 × degrees Celsius + 32.0

#include <iostream>

float celsius_to_fahrenheit(float degrees);

int main()
{
    using namespace std;
    float celsius, fahrenheit;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    fahrenheit = celsius_to_fahrenheit(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit  << " degrees Fahrenheit." << endl;
    return 0;
}

float celsius_to_fahrenheit(float degrees)
{
    return  1.8 * degrees + 32.0;
}
