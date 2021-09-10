#include <iostream>
using namespace std;

// Time complexity:approx O(2^n)
int fibonacci1(int i){
    if(i == 0) return 0; 
    if(i == 1) return 1;

    return fibonacci1(i-1) + fibonacci1(i-2);
}

//Optimizing by Top - down Memoization
//Time complexity: O(n)
int fibonacci(int i, int memo[]){
    if(i == 0 || i == 1) return i;

    if(memo[i] == 0){
        memo[i] = fibonacci(i - 1, memo) + fibonacci(i - 2, memo);
    }
    return memo[i];
}
int fibonacciOpt(int n){
    int memo[n+1] = {0};
    return fibonacci(n, memo);
}

//Bottom-Up Dynamic Programming 
// int fibonacci(int n) {
//     if (n == 0) return 0;
//     else if (n == 1) return 1;

//     int* memo[] = new int[n];
//     memo[0] = 0;
//     memo[1] = 1;
//     for (int i= 2; i < n; i++) {
//         memo[i] = memo[i - 1] + memo[i - 2];
//     }
//     return memo[n - 1] + memo[n - 2];

//     delete[] memo;
// }
// x------------OR--------------x
int fibonacci(int n) {
    if (n == 0) return 0;
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }    
    return a + b;
} 


int main(){

    // cout << fibonacci1(5) << endl;
    // cout << fibonacciOpt(10) << endl;
    cout << fibonacci(10) << endl;
    return 0;
}