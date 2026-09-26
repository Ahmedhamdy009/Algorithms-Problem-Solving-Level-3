#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
    int Prev = 1;    // السابق
    int Current = 1; // الحالي

    cout << Prev << " " << Current << " "; // 1 1

    for (short i = 3; i <= Number; i++)
    {
        int Next = Prev + Current; // التالي   2

        cout << Next << " "; // 2

        Prev = Current; // 1 = 1   1
        Current = Next; //  1 = 2  2
    }

    /*
    ##i = 2
    
    FebNumber = Prev1 + Prev2; <=> 1 + 0 =  1
    Prev2 = Prev1;
    <=>  prev2 = 1
    Prev1 = FebNumber; <=>  prev1 = 1
    =>result = 1 1

    ##i = 3

    FebNumber = Prev1 + Prev2; <=> 1 + 1 =  2
    Prev2 = Prev1;
    <=>  prev2 = 1
    Prev1 = FebNumber; <=>  prev1 = 2
    =>result = 1  1  2

    ##i = 3

    FebNumber = Prev1 + Prev2; <=> 2 + 1 =  3
    Prev2 = Prev1;
    <=>  prev2 = 2
    Prev1 = FebNumber; <=>  prev1 = 3
    =>result = 1  1  2  3

    ##i = 4

    FebNumber = Prev1 + Prev2; <=> 3 + 2 =  5
    Prev2 = Prev1;
    <=>  prev2 = 3
    Prev1 = FebNumber; <=>  prev1 = 5
    =>result = 1  1  2  3  5
    */
}

int main()
{
    PrintFibonacciUsingLoop(10);
}