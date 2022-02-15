#include<iostream>
#include<stack>
using namespace std;

void matchParenthesis(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i] == ')'){
            st.pop();
        }
        else if(st.empty() && s[i] == ')'){
            cout << "Unbalanced";
            return;
        }
    }
    if(!st.empty()){
        cout << "Unbalanced";
    }
    else{
        cout << "Balanced";
    }
    return;
}

void DifferentParenthesis(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                cout << "Unbalanced";
                return;
            }
        }
        if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                cout << "Unbalanced";
                return;
            }
        }
        if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                cout << "Unbalanced";
                return;
            }
        }
    }
    if(st.empty()){
        cout << "Balanced";
    }
    else{
        cout << "Unbalanced";
    }
    return;
}

int main(){
    // matchParenthesis("(7-(8(3*4)+11+12)-8)");
    DifferentParenthesis("(({[]}))[]{[]}");
    return 0;
} 