#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

void push(Node* &head, int data){
    Node* ptr = new Node(data);
    if(head == NULL){
        head = ptr;
        return;   
    }
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void InsertAtEnd(Node* &head, int data){
    Node* ptr = new Node(data);
    if(head == NULL){
        push(head, data);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->prev = temp;
}

void deleteEle(Node* head, int index){
    Node* temp = head;
    while(index){
        temp = temp->next;
        index--;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete(temp);
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    printList(head);
    deleteEle(head, 1);
    printList(head);
    
    return 0;
}