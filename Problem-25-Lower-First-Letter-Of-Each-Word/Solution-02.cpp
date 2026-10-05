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
string LowerFirstLetterOfEachWord(string Words)
{
    short length = Words.length();
    bool isFirstLetter = true;
    string NewWords = "";
    char space = ' ';

    for (short i = 0; i < length; i++)
    {
        if (Words[i] != space && isFirstLetter)
        {
            if (Words[i] >= 'A' && Words[i] <= 'Z')
            {
                // if Word[i] = A <=> int(A) + 32 = 65 + 32 = 97 = a
                Words[i] = Words[i] + 32;
            }
        }

        NewWords += Words[i];

        isFirstLetter = (Words[i] == space ? true : false);
    }

    return NewWords;
}

/*
string LowerFirstLetterOfEachWord(string Words)
{
    bool isFirstLetter = true;

    for (short i = 0; i < Words.length(); i++)
    {
        if (Words[i] != ' ' && isFirstLetter)
        {
            if (Words[i] >= 'A' && Words[i] <= 'Z')
                Words[i] += 32;
        }

        isFirstLetter = (Words[i] == ' ');
    }

    return Words;
}
*/
int main()
{
    string S1 = ReadString("Please Enter Your String ? \n");

    cout << LowerFirstLetterOfEachWord(S1) << endl;

    return 0;
}
