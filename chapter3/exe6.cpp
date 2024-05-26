//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.6 **************
 
// Write a program that asks how many miles you have driven and how many gallons
// of gasoline you have used and then reports the miles per gallon your car has gotten.
// Or, if you prefer, the program can request distance in kilometers and petrol in liters
// and then report the result European style, in liters per 100 kilometers.


#include <iostream>

int main()
{
    using namespace std;
    double dist_kms, petrol_ltr;
    cout << "Enter the distance convered (in kms): ";
    cin >> dist_kms;
    cout << "Enter the total petrol consumed (in liters): ";
    cin >> petrol_ltr;

    auto pet_kms = (petrol_ltr/dist_kms) * 100;

    cout << "Petrol consumed is " << pet_kms << " liters per 100 Kilometers" << endl;

    return 0;
}