#include<iostream>

using namespace std;

bool getBit(int n, int pos){
    //(1<<pos) -> 1 to be left shifted pos no. of time, here pos = 2 so it would give 100
    return (n & (1<<pos)) != 0; // 0101 & 0100 => it will give 1 as 2nd pos
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value){
    // int clear = clearBit(n, pos);
    // if(value == 0){
    //     return clear;
    // }
    // else{
    //     setBit(n, pos);
    // }
    // ..............OR.................
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main(){
    // 5 => 0101
    cout << getBit(5, 2) << endl; //1
    cout << setBit(5, 1) << endl; //0111
    cout << clearBit(5, 2) << endl; //0001
    cout << updateBit(5, 2, 0) << endl; //0001 
    cout << updateBit(5, 1, 1) << endl; //0111
    return 0;
}