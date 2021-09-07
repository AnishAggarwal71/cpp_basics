#include <iostream>
using namespace std;

int noOf1s(int n){
    int count = 0;
    while(n != 0){
        n = (n & n-1);
        count ++;
    }
    return count;
}

void CountingBits(int n){
    if(n < 0){
        return;
    }

    int arr[n+1];
    for(int i = 0; i <= n; i++){
        int count = noOf1s(i);
        arr[i] = count;
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    CountingBits(n);

    return 0;
}