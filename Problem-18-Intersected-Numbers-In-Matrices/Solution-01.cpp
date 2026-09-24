/*
 * Problem Statement:
 * Write a program to print the intersected numbers in two given matrices.
 * 18)-الأعداد المتقاطعة في المصفوفات :
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int ReadNumber(string message)
{
    int Number;
    cout << message;
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

bool IsNumberExistInMatrix(int Matrix[3][3], int Number, short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
                return true;
        }
    }
    return false;
}

void PrintIntersectedNumbersInMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    int Number = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = arr1[i][j];

            if (IsNumberExistInMatrix(arr2, Number, Rows, Cols))
                cout << setw(3) << Number << "   ";
        }
    }
}

int main()
{
    int Matrix1[3][3] = {{10, 1, 12}, {0, 9, 1}, {0, 9, 9}};
    int Matrix2[3][3] = {{10, 11, 2}, {30, 4, 1}, {21, 9, 40}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    cout << "\nIntersected Numbers are :\n";
    PrintIntersectedNumbersInMatrix(Matrix1, Matrix2, 3, 3);
}