/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, then sum each column in another array and print the results from that array.
 * *  * The Difference is the result sum we stock it in array first and we print them from the array not directly.
 * الفرق هو أننا نحسب الناتج الإجمالي ونخزنه أولاً في مصفوفة ثم نطبعه من المصفوفة وليس مباشرة.
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

void SumEachColInMatrix(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    int Sum = 0;
    for (int j = 0; j < Cols; j++)
    {
        for (int i = 0; i < Rows; i++)
        {
            Sum += arr[i][j];
        }
        arrSum[j] = Sum;
        Sum = 0;
    }
}

void PrintEachColSum(int arrSum[3], short Length)
{
    cout << "\nThe following are the sum of each Col in the matrix:\n";

    for (int i = 0; i < Length; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << arrSum[i] << endl;
    }
}
/*
j = 0
1 + 4 + 7 = 12
arrSum[0] = 12

j = 1
2 + 5 + 8 = 15
arrSum[1] = 15

j = 2
3 + 6 + 9 = 18
arrSum[2] = 18
*/

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumEachColInMatrix(arr, arrSum, 3, 3);

    PrintEachColSum(arrSum, 3);

    system("pause>0");
}