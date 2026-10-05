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
string UpperFirstLetterOfEachWord(string Words)
{
    short length = Words.length(); // عدد الحروف
    bool isFirstLetter = true;
    string NewWords = " ";
    char space = ' ';

    cout << "\nString After Conversion : \n";

    for (short i = 0; i < length; i++)
    {

        if (Words[i] != space && isFirstLetter)
        {
            // if word[i] = a <=> int(a) - 32 = 97 - 32 = 65 = A
            Words[i] = char(int(Words[i]) - 32);
        }

        NewWords += Words[i];

        isFirstLetter = (Words[i] == space ? true : false);
    }
    // return Words;
    return NewWords;
}

int main()
{
    string S1 = ReadString("Please Enter Your String ? \n");

    cout << UpperFirstLetterOfEachWord(S1) << endl;

    return 0;
}
