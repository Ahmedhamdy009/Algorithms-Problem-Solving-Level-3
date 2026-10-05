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
string UpperFirstLetterOfEachWord(string Message)
{
    int length = Message.length(); // عدد الحروف
    bool isFirstLetter = true;
    char space = ' ';

    for (short i = 0; i < length; i++)
    {

        if (Message[i] != space && isFirstLetter)
        {
            Message[i] = toupper(Message[i]);
        }
        // Ahmed Hamdy
        //  A != ''  = false      ,    '' == '' = true = H
        isFirstLetter = (Message[i] == space ? true : false);
    }
    return Message;
}

int main()
{
    string S1 = ReadString("Please Enter Your String ? \n");
    cout << "\nString After Conversion : \n";

    cout << UpperFirstLetterOfEachWord(S1) << endl;

    return 0;
}
