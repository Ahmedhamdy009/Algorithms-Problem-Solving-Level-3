/*
 * Problem Statement:
 * Write a program to check if the matrix is palindrome or not.
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

/*
with it self
#i = 0;
arr[0][0] != arr[0][2] <=> 1 != 1 <=> false

arr[0][1] != arr[0][2-1] <=> 2 != 2 <=> false

#i = 1;
arr[1][0] != arr[1][2] <=> 5 != 5 <=> false
arr[1][1] != arr[1][2-1] <=> 5 != 5 <=> false

#i = 2;
arr[2][0] != arr[2][2] <=> 7 != 7 <=> false
arr[2][1] != arr[2][2-1] <=> 3 != 3 <=> false


arr[i][Cols - j - 1]

 j = 0 → 3 - 0 - 1 = 2 → [2]
 j = 1 → 3 - 1 - 1 = 1 → [1]
 j = 2 → 3 - 2 - 1 = 0 → [0]

[0] ↔ [2]
[1] ↔ [1]
[2] ↔ [0]

*/
bool ItsPalidromMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] != arr[i][Cols - j - 1]) //[0] != [2]   العنصر المقابل من الناحية التانية في نفس الصف
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int Matrix1[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};

    cout << "Matrix 1 : \n";
    PrintMatrix(Matrix1, 3, 3);

    if (ItsPalidromMatrix(Matrix1, 3, 3))
    {
        cout << "\nYes It's Palidrom Matrix .\n";
    }
    else
    {
        cout << "\n\No, It's Not Palidrom Matrix . \n";
    }

    system("pause>0");
}