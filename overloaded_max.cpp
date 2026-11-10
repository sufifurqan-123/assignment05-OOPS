/*
Name: Furqan Ahmad Sofi
Enrolment No: CSE-25-88
Date: 7-Oct-2026
Program: Overloaded maxOf() Function
*/

#include <iostream>
using namespace std;

// Find maximum of two integers
int maxOf(int a, int b)
{
    return (a > b) ? a : b;
}

// Find maximum of two double values
double maxOf(double a, double b)
{
    return (a > b) ? a : b;
}

// Find maximum of three integers
int maxOf(int a, int b, int c)
{
    return maxOf(maxOf(a, b), c);
}

// Find maximum element in an array
int maxOf(const int arr[], int n)
{
    int maximum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

int main()
{
    int arr[] = {12, 5, 19, 8, 14};
    int n = 5;

    cout << "Maximum of two integers: "
         << maxOf(5, 8) << endl;

    cout << "Maximum of two doubles: "
         << maxOf(1.5, 2.5) << endl;

    cout << "Maximum of three integers: "
         << maxOf(4, 9, 6) << endl;

    cout << "Maximum element in array: "
         << maxOf(arr, n) << endl;

    return 0;
}