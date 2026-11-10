/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Square and Cube Using Inline Functions
*/

#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int n)
{
    return n * n;
}

// Inline function to calculate cube
inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    cout << "Number\tSquare\tCube" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << "\t"
             << square(i) << "\t"
             << cube(i) << endl;
    }

    return 0;
}