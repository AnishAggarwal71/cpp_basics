#include <iostream>
using namespace std;

void Dec(int n){

    if(n == 1){
        cout << " 1";
        return;
    }

    cout << n << " ";
    Dec(n-1);
}

void Inc(int n){

    if(n == 1){
        cout << "1 ";
        return;
    }

    Inc(n-1);
    cout << n << " ";
}

int main(){
    int n = 10;
    Dec(n);
    cout << endl;
    Inc(n);
}