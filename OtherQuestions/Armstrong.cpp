#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cin >> number;

    int temp = 0;
    int num = number;
    while(num > 0){
        int lastDigit = num%10;
        //temp += pow(lastDigit,3);
        temp = temp + (lastDigit * lastDigit * lastDigit);
        num /= 10;
    }

    if(temp == number){
        cout << "Armstrong number\n";
    }
    else{
        cout << "Not an Armstrong Number";
    }
    
}