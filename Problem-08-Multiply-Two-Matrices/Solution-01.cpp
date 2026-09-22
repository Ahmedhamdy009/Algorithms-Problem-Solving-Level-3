/*
 * Problem Statement:
 * Write a program to fill two 3x3 matrices with random numbers, then multiply them into a 3x3 matrix and print the result.
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

            arr[i][j] = RandomNumber(1, 10);
        }
    }
}
void MultipledMatrix(int Matrix1[3][3], int Matrix2[3][3], int MulitpledMatrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            MulitpledMatrix[i][j] = Matrix1[j][i] * Matrix2[i][j];
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

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];
    int multipledMatrix[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "\n Matrix1 \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n Matrix2 \n";
    PrintMatrix(Matrix2, 3, 3);

    MultipledMatrix(Matrix1, Matrix2, multipledMatrix, 3, 3);

    cout << "\n Results : \n";
    PrintMatrix(multipledMatrix, 3, 3);

    system("pause>0");
}