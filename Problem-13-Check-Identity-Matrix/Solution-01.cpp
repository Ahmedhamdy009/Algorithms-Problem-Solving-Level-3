/*
 * Problem Statement:
 * Write a program to check if the matrix is an identity matrix or not.
 *
 * An identity matrix has `1` on its main diagonal and `0` in all other positions.
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

bool CheckIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {

            if (i == j && Matrix[i][j] != 1) //[0]=[0] = 1 %% !1  كدا غلط  لازم تكون 1
                return false;

            else if (i != j && Matrix[i][j] != 0) //[0]!=[0] = 0 %% !0  كدا غلط لازم تكون 0
                return false;
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    cout << "Matrix1: \n";
    PrintMatrix(Matrix, 3, 3);

    if (CheckIdentityMatrix(Matrix, 3, 3) == true)
    {
        cout << "YES: Matrix is identity.\n";
    }
    else
        cout << "NO: Matrix is NOT identity.\n";
}