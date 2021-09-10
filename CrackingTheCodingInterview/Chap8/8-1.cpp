#include <iostream>
using namespace std;

// int recursion(int n, int steps[], int count = 0){
//     if(n==0){
//         count++;
//         return 0;
//     }

//     int a = steps[0];


//     return count;
// }

int NoOfWays(int n){
    if(n < 0) return 0;
    else if(n == 0) return 1;
    else return NoOfWays(n - 1) + NoOfWays(n - 2) + NoOfWays(n - 3);
}

int main(){

    cout << NoOfWays(4) << endl;

    return 0;
}