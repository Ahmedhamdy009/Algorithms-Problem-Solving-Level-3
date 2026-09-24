/*
 * Problem Statement:
 * Write a program to print the minimum and maximum numbers in a matrix.
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

int GetMaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short max = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > max)
                max = Matrix[i][j];
        }
    }
    return max;
}

int GetMinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short min = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < min)
                min = Matrix[i][j];
        }
    }
    return min;
}

int main()
{
    int Matrix1[3][3] = {{10, 33, 12}, {2, 9, 12}, {10, 40, 29}};

    cout << "Matrix 1 : \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n Minimum Number is : " << GetMinNumberInMatrix(Matrix1, 3, 3) << endl;
    cout << "\n Maximum Number is : " << GetMaxNumberInMatrix(Matrix1, 3, 3) << endl;
    system("pause>0");
}