#include <iostream>
#include <climits>
using namespace std;

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    short n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // // Bubble sort
    // int counter = 1;
    // while(counter < n){
    //     for(int i = 0; i < n - counter; i++){
    //         if(array[i] > array[i+1]){
    //             // swap(array[i], array[i+1]);
    //             int temp = array[i];
    //             array[i] = array[i+1];
    //             array[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }

    // // Insertion sort 
    // for(int i = 1; i < n; i++){
    //     int current = array[i];
    //     int j = i-1;
    //     while(array[j] > current && j >= 0){
    //         array[j+1] = array[j];
    //         j--;
    //     }
    //     array[j+1] = current;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}