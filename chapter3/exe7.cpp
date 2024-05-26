//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.7 **************

// Write a program that asks you to enter an automobile gasoline consumption figure
// in the European style (liters per 100 kilometers) and converts to the U.S. style of
// miles per gallon. Note that in addition to using different units of measurement, the
// U.S.approach (distance / fuel) is the inverse of the European approach (fuel / distance). 
// Note that 100 kilometers is 62.14 miles,and 1 gallon is 3.875 liters.
// Thus, 19 mpg is about 12.4 l/100 km,and 27 mpg is about 8.7 l/100 km.

#include <iostream>
const double KMS_MILES = 62.14; // 100 kms = 62.14 miles
const double LTRS_GLNS = 3.875; // 1 liter = 3.875 gallons
int main()
{
    double liters;
    std::cout << "Enter the gasoline consumption in liters/ 100 kms: ";
    std::cin >> liters;

    auto gallons = liters/LTRS_GLNS;
    auto mpg = KMS_MILES/gallons;

    std::cout << liters << " l/100 kms is equal to " << mpg << " mpg." << std::endl;
    
    return 0;
}