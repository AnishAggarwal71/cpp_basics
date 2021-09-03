#include <iostream>
using namespace std;

void Function(int a){ // Called function
    a = 30;
    // cout << &a << endl;
}

// int Add(int *a, int *b){
//     // a abd b are pointer to integers local to Add
//     *a = 30;
//     int c = (*a) + (*b);
//     return c;
// }

// int main(){ // Calling function
//     int a = 20;
//     // cout << &a << endl;
//     Function(a); // Call by variable
//     // cout << a;

//     int b = 30;
//     int c = Add(&a, &b); // Call be reference

//     cout << c << endl;
// }

// Alternatively 

int* Add(int *a, int *b){
    int* c = new int;
    *c = (*a) + (*b);
    return c;
}

int main(){
    int a = 2, b = 6;
    int *pntr = Add(&a, &b);
    cout << "Sum: " << *pntr << endl;
}