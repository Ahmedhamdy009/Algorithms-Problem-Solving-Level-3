/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with ordered numbers and print it, then transpose the matrix and print it.
 */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
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
void TrasposeMatrix(int arr[3][3], int TrasposeArr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            TrasposeArr[i][j] = arr[j][i];
        }
    }
}

int main()
{

    int arr[3][3];
    int TrasposeArr[3][3];

    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 Ordered matrix:\n";
    PrintMatrix(arr, 3, 3);

    TrasposeMatrix(arr, TrasposeArr, 3, 3);

    cout << "\nThe following is the traspose matrix:\n";
    PrintMatrix(TrasposeArr, 3, 3);
    system("pause>0");
}