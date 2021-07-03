#include<iostream>
using namespace std;

int main(){

    int n,s;
    cin >> n >> s;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while(j<n && sum + a[j] <= s){
        sum += a[j];
        j++;
    } 

    // cout << "While i = 0, Sum:" << sum << " j:" << j << endl;

    if(sum == s){
        cout << i+1 << " " << j << endl; //Adding 1 cause of zero indexing of array
        return 0;
    }

    while(j < n){
        sum += a[j];
        // cout << "Sum:" << sum << " j:" << j << endl;
        while(sum > s){
            sum -= a[i];
            i++;
        }
        if(sum == s){
            st = i+1; //Adding 1 cause of zero indexing of array
            en = j+1; //Adding 1 cause of zero indexing of array
            break;
        }
        j++;
    }

    cout << st << " " << en;
    return 0;
}