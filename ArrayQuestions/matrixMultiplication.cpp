#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout << "Number of rows in M1, number of columns in M1 and number of columns in M2: " << endl; 
    cin >> n1 >> n2 >> n3;

    int M1[n1][n2], M2[n2][n3], Ans[n1][n3];

    cout << "Enter matrix M1: " << endl;

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            cin >> M1[i][j];
        }
    }

    cout << "Enter matrix M2: " << endl;

    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n3; j++){
            cin >> M2[i][j];
        }
    }

    for(int i=0; i<n1; i++) {
        for(int j=0; j<n3; j++)
            Ans[i][j] = 0;
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            for(int k = 0; k < n2; k++){
                Ans[i][j] += M1[i][k]*M2[k][j];
                cout << Ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    cout << "Answer Matri :" << endl;

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            cout << Ans[i][j] << " ";
        }
        cout << endl;
    }

}

