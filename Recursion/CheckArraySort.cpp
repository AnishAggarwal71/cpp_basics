#include<iostream>

using namespace std;

bool CheckSort(int arr[], int n){

    if(n == 1) return true;

    bool restArray = CheckSort(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){

    int arr[5] = { 1, 3, 8, 10, 13};
    cout << CheckSort(arr, 5);
}