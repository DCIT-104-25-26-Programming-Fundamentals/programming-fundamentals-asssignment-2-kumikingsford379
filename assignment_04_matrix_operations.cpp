#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to read a matrix
void readMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Part A: Transpose a matrix
void transposeMatrix(int matrix[10][10], int rows, int cols)
{
    int transpose[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:\n";
    displayMatrix(transpose, cols, rows);
}

// Part B: Add two matrices
void addMatrices(int A[10][10], int B[10][10],
                 int rows, int cols)
{
    int sum[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nSum Matrix:\n";
    displayMatrix(sum, rows, cols);
}

// Part C: Multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10],
                      int result[10][10],
                      int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nProduct Matrix:\n";
    displayMatrix(result, rowsA, colsB);
}

int main()
{
    int matrixA[10][10], matrixB[10][10], result[10][10];
    int rows, cols;

    // =========================
    // PART A - TRANSPOSE
    // =========================
    cout << "PART A - Transpose Matrix" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:" << endl;
    readMatrix(matrixA, rows, cols);

    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrixA, rows, cols);

    transposeMatrix(matrixA, rows, cols);

    // =========================
    // PART B - ADDITION
    // =========================
    cout << "\n\nPART B - Add Two Matrices" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter Matrix A:" << endl;
    readMatrix(matrixA, rows, cols);

    cout << "Enter Matrix B:" << endl;
    readMatrix(matrixB, rows, cols);

    addMatrices(matrixA, matrixB, rows, cols);

    // =========================
    // PART C - MULTIPLICATION
    // =========================
    int rowsA, colsA, rowsB, colsB;

    cout << "\n\nPART C - Multiply Two Matrices" << endl;

    cout << "Enter rows for Matrix A: ";
    cin >> rowsA;

    cout << "Enter columns for Matrix A: ";
    cin >> colsA;

    cout << "Enter Matrix A:" << endl;
    readMatrix(matrixA, rowsA, colsA);

    cout << "Enter rows for Matrix B: ";
    cin >> rowsB;

    cout << "Enter columns for Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB)
    {
        cout << "Error: Matrix multiplication is not possible." << endl;
        return 1;
    }

    cout << "Enter Matrix B:" << endl;
    readMatrix(matrixB, rowsB, colsB);

    multiplyMatrices(matrixA, matrixB, result,
                     rowsA, colsA, colsB);

    return 0;
}
