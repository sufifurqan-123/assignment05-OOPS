/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Leap Year and Even Number
*/

#include <iostream>
using namespace std;

// Inline function to check leap year
inline bool isLeap(int year)
{
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

// Inline function to check even number
inline bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    int year, number;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeap(year))
        cout << year << " is a Leap Year." << endl;
    else
        cout << year << " is Not a Leap Year." << endl;

    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number))
        cout << number << " is Even." << endl;
    else
        cout << number << " is Odd." << endl;

    return 0;
}