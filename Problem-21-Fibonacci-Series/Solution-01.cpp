#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    int Next = 0;
    int Num1 = 0, Num2 = 1;
    for (short i = 1; i <= Number; i++)
    {
        Next = Num1 + Num2;  // 0 + 1=1
        cout << Next << " "; // 1
        Num2 = Num1;         // 1 = 0 = Num2 = 0
        Num1 = Next;         // 0 = 1  = Num1 = 1
    }
    /*
    Num1  Num2  → Next
 1     1   → 2
 1     2   → 3
 2     3   → 5
 3     5   → 8


 Fibonacci:
1. أبدأ بآخر رقمين: 1, 1
2. Next = A + B
3. A = B ، B = Next
4. أكرر لعدد الأرقام المطلوب

    */
}
int main()
{
    PrintFibonacciUsingLoop(10);
}