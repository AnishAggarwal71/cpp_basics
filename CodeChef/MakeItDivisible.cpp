// Problem Code: MAKEDIV3

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int minN = pow(10, n-1) + 2;
        int maxN = pow(10, n) - 1;

        for(int i = minN; i <= maxN; i+3){
            if(i%3 == 0 && i%9 != 0){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}