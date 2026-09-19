// Write your C++ solution here.
// Write your C++ solution here.
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

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    system("pause>0");
}