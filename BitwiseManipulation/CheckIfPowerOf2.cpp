#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n & (n-1))); // n && for the n = 0 execption  
}

int noOf1s(int n){
    int count = 0;
    while(n != 0){
        n = (n & n-1);
        count ++;
    }
    return count;
}

bool isPowerOfFour(int n) {
    if((n & n-1) == 0){
        int count = 0;
        while(n != 1){
            n = n >> 1;
            count++;
        }
        if(count % 2 == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    
    cout << isPowerOf2(n) << endl; //1 if ture, 0 if false
    cout << "No. of ones: " << noOf1s(n) << endl; 
    cout << isPowerOfFour(n) << endl; 


    return 0;
}