#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //Spiral Print 2D array
    int rowStart = 0, rowEnd = n-1, columnStart = 0, columnEnd = m-1;

    while(rowStart <= rowEnd && columnStart <= columnEnd){

        //row start 
        for(int col = columnStart; col <= columnEnd; col++){
            cout << arr[rowStart][col] << " ";
        }

        rowStart++;

        //column end
        for(int row = rowStart; row <= rowEnd; row++){
            cout << arr[row][columnEnd] << " ";
        }

        columnEnd--;

        //row end 
        for(int col = columnEnd; col >= columnStart; col--){
            cout << arr[rowEnd][col] << " ";
        }

        rowEnd--;

        //column strat
        for(int row = rowEnd; row >= rowStart; row--){
            cout << arr[row][columnStart] << " ";
        }

        columnStart++;
    }

    return 0;
}