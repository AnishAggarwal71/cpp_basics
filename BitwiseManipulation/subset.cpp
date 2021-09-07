#include <iostream>

using namespace std;

int Subset(int arr[], int size){
    for(int i = 0; i < (1<<size); i++){
        for(int j = 0; j < size; j++){
            if(i & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[4] = {3, 5, 4, 8};

    Subset(arr, 4);

    return 0;
}