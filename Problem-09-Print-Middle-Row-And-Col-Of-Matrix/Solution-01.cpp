/*
 * Problem Statement:
 * Write a program to fill a 3x3 matrix with random numbers, print it, then print the middle row and the middle column.
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

void PrintMiddleRowOfMatrix(int arr[3][3], short Row, short Cols)
{
    // cout << floor(3 % 2);//1
    // int middleOfTheRow = 1;

    short middleRow = Row / 2; // 3/ 2 = 1

    // arr[1][0]    //arr[1][1]   //arr[1][2]
    for (int j = 0; j < Cols; j++)
    {
        printf(" %0*d   ", 2, arr[middleRow][j]); // هنثبت ال Row ب 1
    }
}

void PrintMiddleColOfMatrix(int arr[3][3], short Row, short Cols)
{

    short middleCol = Cols / 2; // 3% 2 = 1

    for (int j = 0; j < Cols; j++)
    {
        printf(" %0*d   ", 2, arr[j][middleCol]); // هنثبت ال Col  ب 1
    }
}

// او
// void PrintMiddleRowOfMatrix(int arr[3][3], short Row, short Cols)
// {
//      cout << floor(3 % 2);//1

//      int middleOfTheRow = 1;

//     int middleOfTheRow = floor(Row % 2);//3% 2 = 1
//     arr[1][0]    //arr[1][1]   //arr[1][2]
//     for (int i = middleOfTheRow; i <= middleOfTheRow; i++)
//     {
//         for (int j = 0; j < Cols; j++)
//         {
//             printf(" %0*d   ", 2, arr[i][j]);
//         }
//     }
// }

// void PrintMiddleColOfMatrix(int arr[3][3], short Row, short Cols)
// {
// cout << floor(3 % 2);//1
// int middleOfTheRow = 1;

//     int middleOfTheCol = floor(Row % 2);//3% 2 = 1
// arr[0][1]
// arr[1][1]
// arr[2][1]
//     for (int j = 0; j < Cols; j++)
//     {
//         for (int i = middleOfTheCol; i <= middleOfTheCol; i++)
//         {
//             printf(" %0*d   ", 2, arr[j][i]);
//         }
//     }
// }

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "Matrix 1 :\n";
    PrintMatrix(arr, 3, 3);

    cout << "\nMiddle Row of Matrix 1 is : \n";
    PrintMiddleRowOfMatrix(arr, 3, 3);

    cout << "\nMiddle Col of Matrix 1 is : \n";
    PrintMiddleColOfMatrix(arr, 3, 3);

    system("pause>0");
}