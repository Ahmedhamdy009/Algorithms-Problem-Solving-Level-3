/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, then print the sum of each row.
 */
#include <iostream>
#include <string>
#include <ctime>
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
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

void SumEachRowInMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
        cout << "Row " << i + 1 << " Sum = " << Sum << endl;
        Sum = 0;
    }
}
// //********************************************************************************
// Prof Solution :
// int RowSum(int arr[3][3], short RowNumber, short Cols)
// {
//     int Sum = 0;
//     for (short j = 0; j < Cols; j++)
//     {
//         Sum += arr[RowNumber][j];
//     }
//     return Sum;
// }
// void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
// {
//     cout << "\nThe the following are the sum of each row in the matrix:\n";
//     for (short i = 0; i < Rows; i++)
//     {
//         cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
//     }
// }
// //********************************************************************************

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix:\n";

    PrintMatrix(arr, 3, 3);

    cout << "\nThe the following are the sum of each row in the matrix:\n";
    SumEachRowInMatrix(arr, 3, 3);

    //  Prof Solution :
    // PrintEachRowSum(arr, 3, 3);

    system("pause");
}