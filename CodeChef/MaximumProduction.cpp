// Problem Code: EITA

#include <iostream>
using namespace std;    

int main(){
    int t;
    cin >> t;

    while(t>0){
        short d,x,y,z;
        cin >> d >> x >> y >> z;

        short st1 = x * 7;
        short st2 = (y * d) + (z * (7 - d));

        short ans = max(st1,st2);
        cout << ans << endl;

        t--;
    }
    return 0;
}