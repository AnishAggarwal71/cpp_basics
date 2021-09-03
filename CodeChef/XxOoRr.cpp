// Problem Code: XXOORR

#include <iostream>
#include <climits>
using namespace std;    

int toBinary(int ai){

    int x = 1;
    int ans = 0;

    while (x <= ai) {x *= 2;}

    x /= 2;

    while (x > 0)
    {
        int lastDigit = ai / x;
        ai -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t>0){
        int n,k;
        cin >> n >> k;

        int arr[n];
        for(int i=0; i < n; i++){
            cin >> arr[i];
        }

        int noOfOnes[INT_MAX];

        t--;
    }
    return 0;
}