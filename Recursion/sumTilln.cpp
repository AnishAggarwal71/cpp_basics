#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n){

    if(n == 0) return 0;  // Base condition

    int prevSum = sum(n-1);
    return n + prevSum;
}

int raisedToPower(int n, int p){

    if(p == 0) return 1;  // Base condition

    int prevPower = raisedToPower(n, p-1);
    return n * prevPower;
}

int factorial(int n){
    
    if(n == 0) return 1; // Base condition

    int prevFact = factorial(n-1);
    return n * prevFact;
}

int main(){
    int n, pow;
    cin >> n >> pow;

    cout << sum(n) << endl;
    cout << raisedToPower(n, pow) << endl;
    cout << factorial(n) << endl;

    return 0;
}