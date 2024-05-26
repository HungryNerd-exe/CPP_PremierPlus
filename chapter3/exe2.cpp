//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.2 **************

// Write a short program that asks for your height in feet and inches and your weight
// in pounds. (Use three variables to store the information.) Have the program report
// your body mass index (BMI).To calculate the BMI, first convert your height in feet
// and inches to your height in inches (1 foot = 12 inches).Then convert your height
// in inches to your height in meters by multiplying by 0.0254.Then convert your
// weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
// your BMI by dividing your mass in kilograms by the square of your height in
// meters. Use symbolic constants to represent the various conversion factors.

#include <iostream>
#include <math.h>

const int FT_INCHES = 12;
const float INCHES_MTRS = 0.0254;
const float P_KG = 2.2;  
int main()
{
    using namespace std;
    int ht_ft, ht_in, weight;
    float height_mtrs, weight_kgs, bmi;
    cout << "Enter height in feet and inches \n";
    cout << "feet: ";
    cin >> ht_ft;
    cout << "inches: ";
    cin >> ht_in;
    cout << "Enter weight (in pounds): ";
    cin >> weight;

    height_mtrs = ((ht_ft * FT_INCHES) + ht_in) * INCHES_MTRS;
    weight_kgs = weight / P_KG;
    bmi = weight_kgs / sqrt(height_mtrs);
    cout << "BMI is : " << bmi << endl;
    return 0;
}