/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, then print the sum of each column.

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


void SumEachColInMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (int j = 0; j < Cols; j++)
    {
        for (int i = 0; i < Rows; i++)
        {
            Sum += arr[i][j];
        }
        cout << "Col " << j + 1 << " Sum = " << Sum << endl;
        Sum = 0;
    }
}
/*
int Sum = 0;
for (int i = 0; i < Rows; i++)
{
    for (int j = 0; j < Cols; j++)
    {
        Sum += arr[i][j];
    }
    cout << "Col " << j + 1 << " Sum = " << Sum << endl;
    Sum = 0;
}

        j=0   j=1   j=2
          ↓     ↓     ↓
i=0  →    1     2     3
i=1  →    4     5     6
i=2  →    7     8     9


i = 0

j=0 → arr[0][0] = 1
j=1 → arr[0][1] = 2
j=2 → arr[0][2] = 3

      ↓

i = 1

j=0 → arr[1][0] = 4
j=1 → arr[1][1] = 5
j=2 → arr[1][2] = 6

      ↓

i = 2

j=0 → arr[2][0] = 7
j=1 → arr[2][1] = 8
j=2 → arr[2][2] = 9


1 → 2 → 3
4 → 5 → 6
7 → 8 → 9

❌ ده Row by Row
*/

/*

        j=0   j=1   j=2
          ↓     ↓     ↓
i=0  →    1     2     3
i=1  →    4     5     6
i=2  →    7     8     9


j = 0

i=0 → arr[0][0] = 1
i=1 → arr[1][0] = 4
i=2 → arr[2][0] = 7


j = 1

i=0 → arr[0][1] = 2
i=1 → arr[1][1] = 5
i=2 → arr[2][1] = 8


j = 2

i=0 → arr[0][2] = 3
i=1 → arr[1][2] = 6
i=2 → arr[2][2] = 9


1       2       3
↓       ↓       ↓
4       5       6
↓       ↓       ↓
7       8       9

✅ ده Column by Column
*/



// int ColSum(int arr[3][3], short Rows, short ColNumber)
// {
//     int Sum = 0;
//     for (short i = 0; i < Rows; i++)
//     {
//         Sum += arr[i][ColNumber];
//     }
//     return Sum;
// }
// void PrintEachColSum(int arr[3][3], short Rows, short Cols)
// {
//     cout << "\nThe following are the sum of each Col in the matrix:\n";
//     for (int j = 0; j < Rows; j++)
//     {
//         cout << " Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl;
//     }
// }

/*
Sum += arr[i][ColNumber];
i = 0 => arr[0][0] + arr[1][0] + arr[2][0] = result Sum col 1
i = 1 => arr[0][1] + arr[1][1] + arr[2][1] = result Sum col 2
i = 2 => arr[0][2] + arr[1][2] + arr[2][2] = result Sum col 3
*/

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumEachColInMatrix(arr,3,3);
    // PrintEachColSum(arr, 3,3);

    system("pause>0");
}