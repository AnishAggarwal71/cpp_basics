// Problem Code: POINTMEE

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define li long double

int check(li h, li k, li arrX[], li arrY[], int n){
    int steps = 0; 
    for(int i=0; i<n; i++){
        li xx = h-arrX[i]; 
        li yy = k-arrY[i];
        if(xx == 0 && yy == 0){
            steps += 0;
        }
        else if((xx == 0 && yy != 0) || (xx != 0 && yy == 0)){
            steps += 1;
        }
        else if(abs(xx) == abs(yy)){
            steps += 1;
        }
        else{
            steps += 2;
        }
    }
    return steps;
}

int main(){
    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n; 
        li arrX[n], arrY[n];
        li h, k;
        for(int i=0; i<n; i++){
            cin >> arrX[i];
        }
        for(int i=0; i<n; i++){
            cin >> arrY[i];
        }
        int minSteps = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                h = (arrX[i]+arrX[j])/2;
                k = (arrY[i]+arrY[j])/2;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                h = arrX[i];
                k = arrY[j];
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                li c1 = arrX[i] + arrY[i];
                li c2 = arrX[j] - arrY[j];
                h = (c1 + c2)/2;
                k = (c1 - c2)/2;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                li c3 = arrX[i] + arrY[i];
                h = arrX[j];
                k = c3 - h;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                li c4 = arrX[i] + arrY[i];
                k = arrY[j];
                h = c4 - k;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                li c5 = arrX[i] - arrY[i];
                h = arrX[j];
                k = h - c5;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
                li c6 = arrX[i] - arrY[i];
                k = arrY[j];
                h = c6 + k;
                minSteps = min(minSteps, check(h, k, arrX, arrY, n));
            }
        }
        cout << minSteps << endl;
    }

    return 0;
}