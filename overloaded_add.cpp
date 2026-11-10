/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Overloaded add() Function
*/

#include <iostream>
#include <string>
using namespace std;

// Add two integers
int add(int a, int b)
{
    return a + b;
}

// Add two double values
double add(double a, double b)
{
    return a + b;
}

// Add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Concatenate two strings
string add(string a, string b)
{
    return a + b;
}

int main()
{
    cout << "Addition of two integers: "
         << add(3, 4) << endl;

    cout << "Addition of two doubles: "
         << add(1.5, 2.25) << endl;

    cout << "Addition of three integers: "
         << add(1, 2, 3) << endl;

    cout << "Concatenation of strings: "
         << add("Hello, ", "IUST") << endl;

    return 0;
}