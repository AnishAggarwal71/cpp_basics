#include <iostream>
using namespace std;

void A(){
    cout << "Hello";
}

void B(void (*ptr)()){
    ptr(); // call-back function: executes the function ptr is pointing to
}

int main(){
    // void (*p)() = A; // p points to A
    // void (*p)(){&A};
    // B(p); // B takes the function pointer as an argument

    // OR

    B(A); //Like array the name to the function itself is a pointer to itself
    // A is a call-back function
}