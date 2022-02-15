// Problem Code: EUREKA

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        double num = pow((0.143 * n),n);
        int temp = floor(num);
        if(num - temp < 0.5){
            cout << temp << endl;
        } 
        else{
            cout << temp+1 << endl;
        }
        t--;
    }
}