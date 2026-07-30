#include <iostream>
using namespace std;

// Part A: Display a single multiplication table
void printSingleTable(int number)
{
    cout << "\nMultiplication Table for " << number << ":\n";

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Part B: Display multiplication tables from 1 to N
void printTablesUpToN(int n)
{
    for (int num = 1; num <= n; num++)
    {
        cout << "\nMultiplication Table for " << num << ":\n";

        for (int i = 1; i <= 12; i++)
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }

        cout << "---------------------------" << endl;
    }
}

int main()
{
    int number, n;

    // Part A
    cout << "Enter a number for a multiplication table: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Number must be a positive integer." << endl;
        return 1;
    }

    printSingleTable(number);

    // Part B
    cout << "\nEnter N for tables from 1 to N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return 1;
    }

    printTablesUpToN(n);

    return 0;
}
