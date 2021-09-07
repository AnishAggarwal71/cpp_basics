#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key){

    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    firstOcc(arr, n, i+1, key);
}

int lastOcc(int arr[], int n, int i, int key){

    if(i == n){
        return -1;
    }
    int restArray = lastOcc(arr, n, i+1, key);
    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;

}

int main(){

    int arr[10] = {9, 5, 7, 5, 3, 6, 2, 8, 5, 2};
    cout << firstOcc(arr, 10, 0, 5) << endl;
    cout << lastOcc(arr, 10, 0, 5) << endl;
}