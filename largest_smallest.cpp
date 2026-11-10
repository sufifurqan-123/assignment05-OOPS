/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Largest and Smallest Using Inline Functions
*/

#include <iostream>
using namespace std;

// Inline function to find maximum of two numbers
inline int maxOf(int a, int b)
{
    return (a > b) ? a : b;
}

// Inline function to find minimum of two numbers
inline int minOf(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest = maxOf(maxOf(a, b), c);
    int smallest = minOf(minOf(a, b), c);

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}