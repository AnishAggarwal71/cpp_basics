#include<iostream>
#include<string>
using namespace std;

int main(){

    // string str;
    // cin >> str; //Anish is my name
    // cout << str << endl; //Anish

    // getline(cin, str); //Anish is my name
    // cout << str << endl; //Anish is my name

    string s1 = "fam";
    string s2 = "ily";
    string s3 = "ily";


    // s1.append(s2);
    // s1 = s1 + s2;
    // cout << s1 << endl; // family
    cout << s1 + s2 << endl;// family

    string a = " jhwabf ni wJEIE QWID QUD bw hb";
    a.clear(); // clears the string
    if(a.empty()){
        cout << "a is empty" << endl;
    }

    cout << s2.compare(s1) << endl; //-1 so s1 > s2
    if(!s2.compare(s3)){            // s2.compare(s3) gives a bool value
        cout << "s2 and s3 are same"<< endl;
    }

    string b = "nincompoop";
    b.erase(3, 3); // removes
    cout << b << endl; // ninpoop

    return 0;
}