#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[n];

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    // for(int i = 0; i < n; i++){
    //     cout << array[i] << " ";
    // }

    for(int i = 0; i < n; i++){

        // if(maxNo <= array[i]){
        //     maxNo = array[i];
        // }
        maxNo = max(maxNo, array[i]);

        // if(minNo >= array[i]){
        //     minNo = array[i];
        // }
        minNo = min(minNo, array[i]);
    }

    cout << "Max from the array is " << maxNo << endl;
    cout << "Min from the array is " << minNo << endl;

    return 0;
}