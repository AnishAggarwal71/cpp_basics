#include <iostream>
#include <time.h>
using namespace std;

int Add(int a, int b){
    return a+b;
}

int Prod(int a, int b){
    return a*b;
}

int ShouldNotBeChanged(int (*operation)(int, int)){
    srand(time(NULL));
    int a = rand()%100;
    int b = rand()%100;
    cout << "The result of operation between " << a << " & " << b << " is " << operation(a, b) << endl;
}

int main(){
    int c;
    // int *p(int,int) would be declaring a function that would return int*
    int (*p)(int, int); // function pointer 
    p = &Add; //p = Add; would also work 
    c = (*p)(2,3); //de-refrencing and executing the function
    // c = p(2,3); would also work
    cout << c << endl;

    ShouldNotBeChanged(&Add);
    ShouldNotBeChanged(&Prod);
    
}