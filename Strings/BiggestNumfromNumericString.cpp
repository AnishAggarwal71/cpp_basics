#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "dbaubdaaaaao";

    // sort(str.begin(), str.end(), greater<int>());

    sort(str.begin(), str.end());

    int curr = 1;
    int maxOcc = 1;
    char ans;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i+1]){
            curr++;
        }
        else{
            curr = 1;
        }
        maxOcc = max(maxOcc, curr);
        if(maxOcc == curr){
            ans = str[i];
        }
    }

    cout << maxOcc << endl;
    cout << ans << endl;

    // <------------------  00000000  ---------------------->
    // max frequency char

    // int a[26]; // a - z, 26 characters

    // for(int i = 0; i < 26; i++){
    //     a[i] = 0;
    // }

    // for(int i = 0; i < str.length(); i++){
    //     a[str[i]-'a']++;
    // }

    // char ans = 0;
    // int maxFreq = -1;

    // for(int i = 0; i < 26; i++){
    //     if(maxFreq < a[i]){
    //         maxFreq = a[i];
    //         ans = 'a' + i;
    //     }
    // }

    // cout << maxFreq << endl;

    // cout << ans << endl;

    return 0;
}