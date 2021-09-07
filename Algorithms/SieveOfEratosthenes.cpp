#include <iostream>

using namespace std;

void PrimeSieve(int n){  // Finding prime no. from a given range of numbers

    int prime[100] = {0};

    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i*i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
}

void primeFactor(int n){
    int spf[n+1] = {0};  //spf - smallest prime factor
    for(int i = 2; i <= n; i++){
        spf[i] = i;  
    }
    for(int i = 2; i <= n; i++){
        if(spf[i] == i){
            for(int j = i*i; j <= n; j += i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n != 1){
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main(){
    int n;
    cin >> n;

    // PrimeSieve(n);
    primeFactor(n);

    return 0;
}