#include <iostream>
using namespace std;

int factorial(int num){

    int fac = 1; 

    for(int i = num; i > 0; i--){
        fac *= i;

    }
    return fac;
}

int main(){
    int num;
    cin >> num;

    int ans = factorial(num);
    cout << ans << endl;

    return 0;
}