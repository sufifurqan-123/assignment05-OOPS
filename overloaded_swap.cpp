/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Overloaded swapValues() Function
*/

#include <iostream>
using namespace std;

// Swap two integer values
void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap two double values
void swapValues(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// Swap two character values
void swapValues(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    double x = 2.5, y = 5.5;
    char ch1 = 'A', ch2 = 'B';

    cout << "Before swapping integers: "
         << a << " " << b << endl;

    swapValues(a, b);

    cout << "After swapping integers: "
         << a << " " << b << endl;

    cout << "\nBefore swapping doubles: "
         << x << " " << y << endl;

    swapValues(x, y);

    cout << "After swapping doubles: "
         << x << " " << y << endl;

    cout << "\nBefore swapping characters: "
         << ch1 << " " << ch2 << endl;

    swapValues(ch1, ch2);

    cout << "After swapping characters: "
         << ch1 << " " << ch2 << endl;

    return 0;
}
