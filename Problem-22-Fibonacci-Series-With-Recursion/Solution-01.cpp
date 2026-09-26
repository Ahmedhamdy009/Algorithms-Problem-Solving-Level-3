#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingRecursion(short Number, short Prev1, short Prev2)
{
    int FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev1 + Prev2; // 0 + 1 = 1

        cout << FebNumber << "  "; // 1

        Prev2 = Prev1;  // 1 = 0  0
        Prev1 = FebNumber;// 0 == 1  1

        PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
    }
}
int main()
{
    PrintFibonacciUsingRecursion(10, 0, 1);
}