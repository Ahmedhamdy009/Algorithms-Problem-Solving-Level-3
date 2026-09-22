/*
 * Problem Statement:
 * Write a program to check if the matrix is a scalar matrix or not.
 *
 * A scalar matrix has the same number on the main diagonal and `0` in all other positions.
 * يجب أن يكون القطر 'بنفس الرقم' وبقية الأرقام يجب أن تكون '0'
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

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

bool CheckScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != Matrix[0][0])// [0][0] = 9 && [0][0] =9 != [1][1] =0  كدا غلط لان لازم تساوي نفس الرقم
                return false;

            else if (i != j && Matrix[i][j] != 0) //[0]!=[0] = 0 %% !0  كدا غلط لازم تكون 0
                return false;
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 9}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    if (CheckScalarMatrix(Matrix, 3, 3) == true)
    {
        cout << "YES: Matrix is Scale.\n";
    }
    else
        cout << "NO: Matrix is NOT Scale.\n";
}