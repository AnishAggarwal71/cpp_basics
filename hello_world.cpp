#include<iostream>
using namespace std;

int main(){
    
    short t;
    cin >> t;

    while(t--){

        int amount1;
        int amount2;

        cin >> amount1;
        cin >> amount2;

        cout << amount1 + amount2 << endl;
        cout << "Kid be rich\n";

        //if-else
        if(amount1 >= amount2){
            cout << "Women enpowerment be like\n";
        }
        else{
            cout << "obviously\n";
        }

    }

    return 0;
}