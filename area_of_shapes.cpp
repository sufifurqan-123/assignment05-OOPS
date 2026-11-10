/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Area of Shapes Using Function Overloading
*/

#include <iostream>
#include <cmath>
using namespace std;

// Area of circle
double area(double r)
{
    return 3.1416 * r * r;
}

// Area of rectangle
double area(double l, double b)
{
    return l * b;
}

// Area of triangle using Heron's formula
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    double r, l, b, a, x, y;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Area of Circle = " << area(r) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Area of Rectangle = " << area(l, b) << endl;

    cout << "\nEnter three sides of triangle: ";
    cin >> a >> x >> y;

    cout << "Area of Triangle = " << area(a, x, y) << endl;

    return 0;
}