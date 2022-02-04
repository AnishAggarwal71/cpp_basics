#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    int temp = 0;

    while(number > 0){
        int lastDigit = number % 10;
        temp = (temp * 10) + lastDigit;
        number /= 10;
    }
    cout << temp;
}