/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Inline Function vs Macro
*/

#include <iostream>
using namespace std;

// Macro definition
#define SQR(x) x*x

// Inline function
inline int sqr(int x)
{
    return x * x;
}

int main()
{
    cout << "Using Macro: " << SQR(2 + 3) << endl;

    cout << "Using Inline Function: " << sqr(2 + 3) << endl;

    return 0;
}