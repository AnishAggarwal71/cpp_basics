#include <iostream>
#include <climits>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    while(low < high){
        if(arr[low] + arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low] + arr[high] > k){
            high --;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){

    int n,k;
    cin >> n >> k;

    // The input array must be sorted for two pointer approach

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << pairSum(arr, n, k);

    return 0;
}