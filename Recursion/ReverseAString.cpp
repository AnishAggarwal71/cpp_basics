#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Time and space complexity : O[N^2]
void reverse(string str){

    if(str.length() == 0){
        return;
    }

    string restStr = str.substr(1);
    reverse(restStr);
    cout << str[0];
}

// Time and space complexity : O[N]
void reverse(string &str, int n){

    static int i = 0;

    if(n == str.length()){
        return;
    }

    reverse(str, n+1);
    
    if(i <= n){
        swap(str[i++],str[n]);
    }
}

// Time and space complexity : O[N]
void reverse(string &str, int l, int h){
    if(l < h){
        swap(str[l],str[h]);
        reverse(str, l+1, h-1);
    }
}

int main(){
    string str = "binod";
    // reverse(str);
    // reverse(str, 0);
    reverse(str, 0, str.length() - 1);
    cout << str << endl;
    return 0;
}