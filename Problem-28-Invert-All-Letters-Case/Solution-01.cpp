#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string message;
    cout << "Please enter a String : " << endl;
    getline(cin, message);

    return message;
}
char InvertingCharacterCase(char char1)
{
    // if char1 = A <=> isupper(A) = true => tolower(A) = a
    // if char1 = a <=> isupper(a) = false => toupper(a) = A

    // If Upper => Lower, If Lower => Upper
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

string InvertAllLetterCase(string Words)
{
    short Length = Words.length(); // عدد الاحرف

    for (int i = 0; i < Length; i++)
    {
        Words[i] = InvertingCharacterCase(Words[i]);
    }
    return Words;
}

int main()
{

    string Words = ReadString();

    cout << "\nString After Invertint All Letter Case : \n";

    Words = InvertAllLetterCase(Words);
    cout << Words << endl;

    return 0;
}
