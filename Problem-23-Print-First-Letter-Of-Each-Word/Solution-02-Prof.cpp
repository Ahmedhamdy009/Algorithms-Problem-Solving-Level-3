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
void PrintFirstLetterEachWord(string Message)
{
    int length = Message.length();//عدد الحروف
    bool isFirstLetter = true;
    char space = ' ';

    cout<<"\n First Letter of this string : \n";

    for (short i = 0; i < length; i++)
    {

        if (Message[i] != space && isFirstLetter)
        {
            cout << Message[i] << endl;
        }
        //Ahmed Hamdy
        // A != ''  = false      ,    '' == '' = true = H
        isFirstLetter = (Message[i] == space ? true : false);
    }
}

int main()
{
    PrintFirstLetterEachWord(ReadString("Please Enter Your String ? "));
    return 0;
}
