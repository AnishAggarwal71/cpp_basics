// Problem Code: GOODWEAT

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[7];
        int weather = 0;
        for(int i = 0; i < 7; i++){
            cin >> a[i];
            if(a[i] == 1){
                weather += 1;
            }
            else if(a[i] == 0){
                weather -= 1;
            }
        }

        if(weather > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}