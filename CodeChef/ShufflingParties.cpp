// Problem Code: SHUFFLIN

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int aEven = 0, aOdd = 0;

        int n, x;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> x;
            if(x%2 == 0){
                aEven++;
            }
            else{
                aOdd++;
            }
        }

        int odd = n/2;
        int even = n/2;
        if(n%2 == 1){
            odd++;
        }

        cout << min(odd, aEven)+min(even, aOdd) << endl;
    }

    return 0;
}