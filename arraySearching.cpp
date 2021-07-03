#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int key){

    // Time Complexity : O(n)
    for (int i = 0; i < n; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int array[], int n, int key){

    // Time Complexity : O(log(2)n  )
    int s = 0;
    int e = n;
    while(s <= e){
        int mid =(s+e)/2;

        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout << "Enter the size of the array ";
    cin >> n;

    int array[n];

    cout << "Enter the array:- \n";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int key;
    cout << "Enter the Key \n";
    cin >> key;

    cout << linearSearch(array, n, key) << endl;
    cout << binarySearch(array, n, key) << endl;

    return 0;
}