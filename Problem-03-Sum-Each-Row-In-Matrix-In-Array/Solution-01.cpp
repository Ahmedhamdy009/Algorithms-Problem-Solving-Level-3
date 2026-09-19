/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, then sum each row in a separate array and print the results from that array.
 * The Difference is the result sum we stock it in array first and we print them from the array not directly.
 * الفرق هو أننا نحسب الناتج الإجمالي ونخزنه أولاً في مصفوفة ثم نطبعه من المصفوفة وليس مباشرة.
 *
 *
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

void SumEachRowInMatrix(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        arrSum[i] = 0;

        for (int j = 0; j < Cols; j++)
        {
            arrSum[i] += arr[i][j];
        }
    }
}

void PrintRowsSumArray(int arrSum[3], short Rows)
{
    for (int i = 0; i < Rows; i++)
    {
        cout << " Row " << i + 1 << " Sum = " << arrSum[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";

    PrintMatrix(arr, 3, 3);

    SumEachRowInMatrix(arr, arrSum, 3, 3);

    cout << "\nThe following are the sum of each row in the matrix:\n";

    PrintRowsSumArray(arrSum, 3);

    system("pause>0");
}