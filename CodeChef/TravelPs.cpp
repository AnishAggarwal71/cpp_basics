//Problem Code: TRAVELPS

#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        
        int time = 0;

        for(int i = 0; i < str.length(); i++){
            if(str[i] == '0'){
                time += a;
            }
            else{
                time += b;
            }
        }
        
        cout << time << endl;
    }

    return 0;
}