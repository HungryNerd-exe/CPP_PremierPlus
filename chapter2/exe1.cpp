//********** Premier Plus 6th Edition **************
//********** Programming Exercise 2.1 **************

// Write a C++ program that displays your name and address (or if you value your
// privacy,a fictitious name and address).

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter Your Name: ";
    string name, add;
    cin >> name;
    cout << "Enter your Address : ";
    cin >> add;
    cout << "\n";
    cout << "Name: " << name << ", Address: " << add << endl;
    return 0;
}
