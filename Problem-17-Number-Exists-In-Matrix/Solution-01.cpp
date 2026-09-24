/*
 * Problem Statement:
 * Write a program to check if a given number exists in a matrix or not.
 * 17)-الرقم موجود في المصفوفة :
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

int main()
{
    int Matrix[3][3] = {{10, 1, 12}, {0, 9, 1}, {0, 9, 9}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    int Number = ReadNumber("Please enter the number to look for in matrix ? ");

    if (IsNumberExistInMatrix(Matrix, Number, 3, 3))
    {
        cout << "Yes: It is There ";
    }
    else
    {
        cout << "No: It is Not Exists ";
    }
}