#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string message;
    cout << "Please Enter Your String : \n";
    getline(cin, message);

    return message;
}
char ReadChar()
{
    char Char1;
    cout << "\nPlease Enter a Character : \n";
    cin >> Char1;

    return Char1;
}

int CountLetters(string Words, char char1)
{
    short Length = Words.length();
    short Counter = 0;

    for (int i = 0; i < Length; i++)
    {
        if (Words[i] == char1)
            Counter++;
    }
    return Counter;
}

int main()
{
    string Words = ReadString();
    char Char1 = ReadChar();
 
    cout << "\nLetter " << Char1 << " Count = " << CountLetters(Words, Char1) << endl; 

    return 0;
}
