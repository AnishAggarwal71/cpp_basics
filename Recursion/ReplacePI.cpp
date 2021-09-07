#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string replacePi(string str){

    if(str.length() == 0) return "";

    char ch1 = str[0];
    char ch2 = str[1];

    if(ch1 == 'p' && ch2 == 'i'){
        string ans = replacePi(str.substr(2));
        return "3.14" + ans;
    }
    else{
        string ans = replacePi(str.substr(1));
        return ch1 + ans;
    }

}

void replacePi(string &str, int l){

    if(l == str.length()){
        return;
    }

    char ch1 = 'p';
    char ch2 = 'i';
    if(str[l] == ch1 && str[l+1] == ch2){
        str.erase(l,2);
        str.insert(l, "3.14");
    }
    replacePi(str, l+1);
}

int main(){
    string str = "pippxxppiixipi";
    cout << replacePi(str) << endl;
    replacePi(str, 0);
    cout << str << endl;
}