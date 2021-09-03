#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    // cout << &a << " " << p << endl;
    // cout << a << " " << *p << endl;
    // cout << "Address p is " << p << endl;
    // cout << "Size of integer is " << sizeof(int) << endl;
    // cout << "Address p+1 is " << p+1 << endl;

    int A[] = {2,4,5,8,1};
    int i;
    // int *p = A;
    // A++; //Invalid
    // p++; // Valid
    for(i=0; i < 5; i++){
        cout << "Address = " << &A[i] <<endl;
        cout << "Address = " << A+i <<endl;
        cout << "Value = " << A[i] <<endl;
        cout << "Value = " << *(A+i) <<endl;
    }
}