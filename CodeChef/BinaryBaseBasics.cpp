// Problem Code: BINBASBASIC

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
        int n, k, ko = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < n/2 ; i++){
            if(s[i] != s[n-i-1]){
                ko++;
            }
        }
        if(n%2 == 0){
            if(ko <= k && (k-ko)%2 == 0 && k-ko <= n-ko){
                cout << "YES";
            }
            
            else{
                cout << "NO";
            }
        }
        else{
            if(ko <= k && k-ko <= n-ko){
                cout << "YES";
            }
            
            else{
                cout << "NO";
            }
        }
        cout << endl;
    }
	return 0;
}
