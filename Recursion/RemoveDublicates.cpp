#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Time and space complexity : O[N^2]
string removeDup(string str){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string ans = removeDup(str.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return (ch + ans);
}

// Time and space complexity : O[N]
void removeDup(string &str, int l){
    if(l == str.length()){
        return;
    }
    if(str[l] == str[l+1]){
        str.erase(l,1);
        l--;
    }
    removeDup(str, l+1);
}

int main(){
    string str = "ffnxxxwffewwww";
    // cout << removeDup(str) << endl;
    removeDup(str, 0);
    cout << str << endl;

    return 0;
}