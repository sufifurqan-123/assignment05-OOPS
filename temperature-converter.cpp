/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Temperature Converter Using Inline Functions
*/

#include <iostream>
using namespace std;

// Convert Celsius to Fahrenheit
inline double cToF(double c)
{
    return (c * 9.0 / 5.0) + 32;
}

// Convert Fahrenheit to Celsius
inline double fToC(double f)
{
    return (f - 32) * 5.0 / 9.0;
}

int main()
{
    int choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        cout << "Temperature in Fahrenheit = "
             << cToF(temperature) << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        cout << "Temperature in Celsius = "
             << fToC(temperature) << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}