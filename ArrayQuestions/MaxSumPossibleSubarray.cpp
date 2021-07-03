#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    // int current;
    // int maxNo = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     current = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         current += array[j];
    //         maxNo = max(maxNo,current);
    //     }
    // }
    // cout << "Max is:" << maxNo;

    // // Another method 
    // int currentSum[n+1];
    // currentSum[0] = 0;

    // for (int i = 1; i <= n; i++){
    //     currentSum[i] = currentSum[i-1] + array[i-1];
    // }

    // int maxSum = INT_MIN;
    // for(int i = 1; i <= n; i++){
    //     int sum = 0;
    //     for(int j = 0; j<i; j++){
    //         sum = currentSum[i] - currentSum[j];
    //         maxSum = max(maxSum,sum);
    //     }
    // }
    // cout << "Max is:" << maxSum;

    //Kadane's Algorithm
     int currentSum = 0;
     int maxSum = INT_MIN;

     for(int i = 0; i < n; i++){
         currentSum += array[i];
         if(currentSum < 0){
             currentSum = 0;
         }
         maxSum = max(maxSum,currentSum);
     }
     cout << "Max is:" << maxSum;

    return 0;
}