#include <iostream>
#include <string>
using namespace std;

string ReadString(string Msg)
{
    string message;

    cout << Msg;
    // cin.ignore(1,'\n');
    getline(cin, message);

    return message;
}
string UpperAllLetterOfAString(string Words)
{
    int length = Words.length(); // عدد الحروف

    for (short i = 0; i < length; i++)
    {

        Words[i] = toupper(Words[i]);
    }

    return Words;
}

string LowerAllLetterOfAString(string Words)
{
    int length = Words.length(); // عدد الحروف

    for (short i = 0; i < length; i++)
    {

        Words[i] = tolower(Words[i]);
    }
    return Words;
}

int main()
{
    string S1 = ReadString("Please Enter Your String ? \n");

    cout << "\nString After Upper : \n";
    S1 = UpperAllLetterOfAString(S1);
    cout << S1 << endl;

    cout << "\nString After Lower : \n";
    S1 = LowerAllLetterOfAString(S1);
    cout << S1 << endl;

    return 0;
}
