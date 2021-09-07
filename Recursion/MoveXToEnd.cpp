#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Time and space complexity : O[N^2]
string moveX(string str){

    if(str.length() == 0) return "";

    char ch = str[0];
    string ans = moveX(str.substr(1));

    if(ch == 'x'){
        return ans + ch;
    }
    return ch + ans;
}

// Time and space complexity : O[N]
void moveX(string &str, int l, int h){
    
    if(l == str.length()){
        return;
    }

    char ch = 'x';
    if(str[l] == ch){
        str.erase(l,1);
        str.insert(h,"x");
    }
    moveX(str, l+1, h);
}

int main(){
    string str = "xbpmxghp";
    // cout << moveX(str) << endl;
    moveX(str, 0, str.length()-1);
    cout << str << endl;
}