#include <iostream>
using namespace std;

void fibenacci(int num){

    int n1 = 0;
    int n2 = 1;
    int nextNum = 0;

    for(int i = 0; i < num; i++){
        cout << n1 << endl;
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }
}

int main(){

    int num;
    cin >> num;

    fibenacci(num);

    return 0;
}