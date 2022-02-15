#include<iostream>
using namespace std;

class Stack{
    int size;
    int top;
    int * arr;
    
    public:
    Stack(int val){
        size = val;
        top = -1;
        arr = new int[val];
    }
    
    void push(int val){
        if(top == size-1){
            cout << endl << "Stack Overflow!" << endl;
            return;
        }
        else{
            top++;
            arr[top] = val;
        }
        return;
    }

    int pop(){
        if(top == -1){
            cout << endl << "Stack is Empty!" << endl;
            return 0;
        }
        else{
            int val = arr[top];
            top--;
            return val;
        }
    }

    int peek(int index){
        int temp = top - index + 1;
        if(temp < 0){
            cout << "Not a valid Position in Stack"<< endl;
            return -1;
        }
        else{
            return arr[temp];
        }
    }
};

int main(){
    Stack* sp = new Stack(10);
    sp->push(1);
    sp->push(2);
    sp->push(3);
    sp->push(4);
    cout << sp->pop() << endl;
    sp->push(5);
    sp->push(6);
    cout << sp->pop() << endl;
    sp->push(7);
    sp->push(8);
    sp->push(9);
    sp->push(10);
    cout << sp->pop() << endl;
    cout << "Element at 1st index: " << sp->peek(1) << endl;
    return 0;
}

