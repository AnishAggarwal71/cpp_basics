#include<iostream>
#include<algorithm>
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

    // rowcout << s2.compare(s1) << endl; //-1 so s1 > s2
    if(!s2.compare(s3)){            // s2.compare(s3) gives a bool value
        cout << "s2 and s3 are same"<< endl;
    }

    string b = "nincompoop";
    b.find("com"); //3
    b.insert(2, "lol"); // ninlolcompoop
    b.length(); // 13
    b.erase(3, 3); // removes lol
    cout << b << endl; // nincompoop

    string s = b.substr(6, 4);
    cout << s << endl; //poop

    string c = "789"; // Numeric strings
    int x = stoi(c);
    cout << x + 2 << endl; // 791
    cout << to_string(x) + "2" << endl; // 7892

    string d = "ewaghmnbewrtz";
    sort(d.begin(), d.end());
    cout << d << endl; //abeeghmnrtwwz

    return 0;
}