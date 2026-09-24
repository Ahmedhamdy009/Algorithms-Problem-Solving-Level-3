/*
 * Problem Statement:
 * Write a program to count a given number in a matrix.
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nEnter the number to count in matrix ? ";
    cin >> Number;
    return Number;
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
            // printf("%0*d  ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int CountNumberInMatrix(int Matrix[3][3], int NumberToCount, short Rows, short Cols)
{
    int Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == NumberToCount)
                Counter++;
        }
    }
    return Counter;
}

int main()
{
    int Matrix[3][3] = {{9, 1, 12}, {0, 9, 1}, {0, 9, 9}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    int NumberToCount = ReadNumber();
    cout << "\nNumber " << NumberToCount << " counter in matrix is " << CountNumberInMatrix(Matrix, NumberToCount, 3, 3) << endl;
}