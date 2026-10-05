#include <iostream>
#include <string>
using namespace std;

char ReadChar()
{
    char char1;
    cout << "Please enter a Character ? " << endl;
    cin >> char1;

    return char1;
}
char InvertingCharacterCase(char char1)
{
    // if char1 = A <=> isupper(A) = true => tolower(A) = a
    // if char1 = a <=> isupper(a) = false => toupper(a) = A

    // If Upper => Lower, If Lower => Upper
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

int main()
{

    char Ch = ReadChar();
    cout << "\nChar After Invertint Case : \n";

    cout << InvertingCharacterCase(Ch);

    return 0;
}
