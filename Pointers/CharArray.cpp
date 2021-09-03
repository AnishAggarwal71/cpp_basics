#include <iostream>
#include <string>
using namespace std;

void print(char* C){
    int i = 0;
    while(C[i] != '\0'){
        cout << C[i];
        i++;
    }

}

void Func(int A[][2][2]) // passing 1-D array
{

}

int main(){
    char C[20] = "Hello";
    // print(C);

    int A[3][2][2] = {{{2,5},{7,9}},
                    {{3,4},{6,1}},
                    {{0,8},{11,13}}};
    // cout << A << endl << *A << endl << A[0] << endl << &A[0][0] << endl; //All will give 0x61fecc
    // cout << *(A[0][0] + 1) << endl; //5
    // cout << *A[0][0] << endl; //2
    // cout << *A[0] << endl; //0x61fecc
    // cout << **A[0]; //2
    int B[2] = {1,2};
    int D[2][3] = {{2,4,6},{5,7,8}}; // D returns int (*)[3]
    Func(C); // B returns int*

}