#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void subSequence(string str, string ans){

    if(str.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    string restString = str.substr(1);

    subSequence(restString, ans); // "" Called
    subSequence(restString, ans + ch); // str[0] Called

}

void withASCIIValue(string str, string ans){
    
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    int asciiVal = int(ch);
    string ros = str.substr(1);

    withASCIIValue(ros, ans); 
    withASCIIValue(ros, ans + ch);
    withASCIIValue(ros, ans + to_string(asciiVal)); 
}

int main(){

    subSequence("ABC", "");
    withASCIIValue("AB", "");
    
    return 0;
}