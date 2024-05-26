//********** Premier Plus 6th Edition **************
//********** Programming Exercise 3.5 **************

// Write a program that requests the user to enter the current world population and
// the current population of the U.S. (or of some other nation of your choice). Store
// the information in variables of type long long. 
// Have the program display the percent that the U.S. (or other nation’s) population is of the world’s population.
// The output should look something like this:
// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world population.
 
#include <iostream>

int main()
{
    using namespace std;
    long long int world_pop, us_pop;
    cout << "Enter the world's population: ";
    cin >> world_pop;
    cout << "Enter the population of the US: ";
    cin >> us_pop;

    cout << " The population of the US is " << (us_pop/double(world_pop))*100 
         << "\% of the world population" << endl;

    return 0;
}