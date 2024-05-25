// Write a C++ program that uses three user-defined functions (counting main() as
// one) and produces the following output:
// Three blind mice
// Three blind mice
// See how they run
// See how they run

//One function, called two times, should produce the first two lines,and the remaining function,also called twice, should produce the remaining output

// Program name : exe3.cpp
// Description  : user-defined functions to run statements sequencially
// Notes        :
// Date         : 23-May-2024

// ***********************************
// headers
// ***********************************
#include <iostream>

// ***********************************
// global variables
// ***********************************

// ***********************************
// function declaration
// ***********************************
void print_f1(); // function1 to print - Three blind mice
void print_f2(); // function2 to print - see how they run

// Main
int main()
{
    print_f1();
    print_f1();
    print_f2();
    print_f2();

    return 0;
}

void print_f1()
{
    std::cout << "Three blind mice" << std::endl;
}

void print_f2()
{
    std::cout << "See how they run" << std::endl;
}

// ***********************************
// Program End
// ***********************************