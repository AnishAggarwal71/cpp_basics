#include <iostream>

using namespace std;

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        cout << xorsum << " ";
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

bool getBit(int n, int pos){
    return (n & (1<<pos)) != 0;
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

void uniqueFor2Num(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int firstNum = 0;
    for(int i = 0; i < n; i++){
        if(getBit(arr[i], pos-1)){
            firstNum = firstNum ^ arr[i];
        }
    }
    cout << firstNum << endl;
    cout << (tempxor ^ firstNum) << endl;
}

int unique3(int arr[], int n){
    int result = 0;
    for(int i = 0; i < 64; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){

    int arr[5] = {1,2,3,2,1};
    int arr2[8] = {2,3,7,4,5,3,2,4};
    int arr3[10] = {1,2,7,5,2,2,1,5,1,5};
    cout << unique(arr, 5) << endl;
    uniqueFor2Num(arr2, 8);
    cout << unique3(arr3, 10);

    return 0;
}