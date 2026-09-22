/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, then write a function to sum all numbers in the matrix and print the result.
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

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
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

int SumOfMatrix(int arr[3][3], short Row, short Cols)
{
    int Sum = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum +=arr[i][j];
        }
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout << "Matrix 1 :\n";
    PrintMatrix(arr, 3, 3);

    cout << "Sum of Matrix1 is : ";
   cout<< SumOfMatrix(arr, 3, 3);

    system("pause>0");
}