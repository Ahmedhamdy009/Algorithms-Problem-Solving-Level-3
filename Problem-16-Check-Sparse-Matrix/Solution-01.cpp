/*
 * Problem Statement:
 * Write a program to check if the matrix is sparse or not.
 *
 * A sparse matrix has a number of zero elements greater than its other elements.
 * تحقق من المصفوفة المتفرقة
 * المصفوفة المتفرقة تعني أن عدد الأصفار أكبر من الأعداد الأخرى
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

bool CheckSparseInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int ZeroCount = 0;
    int NonZeroCount = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == 0)
                ZeroCount++;

            else
                NonZeroCount++;
        }
    }
    return ZeroCount > NonZeroCount;
}

int main()
{
    int Matrix[3][3] = {{0, 0, 12}, {0, 0, 1}, {0, 0, 9}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    if (CheckSparseInMatrix(Matrix, 3, 3))
    {
        cout << "Yes: It is Sparse ";
    }
    else
    {
        cout << "No: It is Not Sparse ";
    }
}