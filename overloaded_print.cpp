/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Overloaded print() Function
*/

#include <iostream>
#include <string>
using namespace std;

// Print integer
void print(int n)
{
    cout << "Integer: " << n << endl;
}

// Print double
void print(double n)
{
    cout << "Double: " << n << endl;
}

// Print character
void print(char ch)
{
    cout << "Character: " << ch << endl;
}

// Print string
void print(string str)
{
    cout << "String: " << str << endl;
}

int main()
{
    print(10);
    print(25.5);
    print('A');
    print("Hello IUST");

    return 0;
}