#include <iostream>
using namespace std;

// Part A: Print the first N Fibonacci terms
void printFibonacci(int n)
{
    int first = 0, second = 1, next;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << first << " ";
        }
        else if (i == 1)
        {
            cout << second << " ";
        }
        else
        {
            next = first + second;
            cout << next << " ";

            first = second;
            second = next;
        }
    }

    cout << endl;
}

// Part B: Check if a number is a Fibonacci number
bool isFibonacci(int number)
{
    if (number < 0)
    {
        return false;
    }

    int first = 0, second = 1, next;

    while (first <= number)
    {
        if (first == number)
        {
            return true;
        }

        next = first + second;
        first = second;
        second = next;
    }

    return false;
}

int main()
{
    int n;

    // Part A
    cout << "How many terms? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of terms must be positive." << endl;
        return 1;
    }

    printFibonacci(n);

    // Part B
    int number;

    cout << "\nEnter a number to check: ";
    cin >> number;

    if (isFibonacci(number))
    {
        cout << number << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << number << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
