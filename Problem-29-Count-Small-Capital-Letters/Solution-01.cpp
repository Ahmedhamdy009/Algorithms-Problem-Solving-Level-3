#include <iostream>
using namespace std;
string ReadString()
{
    string message;
    cout << "Please Enter Your String ? \n";
    getline(cin, message);

    return message;
}
int CountCapitalLetters(string Words)
{
    short Length = Words.length();
    int Counter = 0;

    for (int i = 0; i < Length; i++)
    {
        if (isupper(Words[i]))
        Counter++;
    }
    return Counter;
}

int CountSmallLetters(string Words)
{
    short Length = Words.length();
    int Counter = 0;

    for (int i = 0; i < Length; i++)
    {
        if (islower(Words[i]))
        Counter++;
    }
    return Counter;
}

int main()
{
    string Words = ReadString();
    cout << "\nString Length = " << Words.length() << endl;

    cout << "Capital Letters Count = " << CountCapitalLetters(Words) << endl;

    cout << "Small Letters Count = " << CountSmallLetters(Words);
    return 0;
}
