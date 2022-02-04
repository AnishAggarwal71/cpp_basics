#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter a caracter\n";

    cin >> ch;

    //if((ch>=97 && ch<=122)||(ch>=65 && ch<=90)){
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << ch << " is an Alphabet";
    }
    else
    {
        cout << ch << " is not an Alphabet";
    }
    
    return 0;
}