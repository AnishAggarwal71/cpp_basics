#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        // node(int value){
        //     data = value;
        //     next = NULL;
        // }
};

void InsertAtTail(){

}

int main(){

    node* A;
    A = NULL;

    node* temp = new node();
    temp -> data = 2;
    temp -> next = NULL;
    A = temp;
    cout << temp << " " << *temp << endl;

    node* temp1 = A;
    

}