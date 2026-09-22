/*
 * Problem Statement:
 * Write a program to compare two matrices and check if they are equal or not.
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {

            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            // cout << setw(3) << "   ";
            printf("%0*d  ", 2, arr[i][j]);
        }
        cout << endl;
    }
}
bool CheckMatricesEquality(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    bool AreEqual = true;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                AreEqual = false;
            }
        }
    }
    return AreEqual;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "Matrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix 2 :\n";
    PrintMatrix(Matrix2, 3, 3);

    if (CheckMatricesEquality(Matrix1, Matrix2, 3, 3) == true)
    {
        cout << "\nYes, Matrices are equal\n";
    }
    else
        cout << "\nNo, Matrices are NOT equal\n";

    system("pause>0");
}