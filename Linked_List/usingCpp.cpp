#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int data){
    Node* ptr = new Node(data);
    if(head == NULL){
        head = ptr;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
    return;
}

void push(Node* &head, int data){
    Node* ptr = new Node(data);
    ptr->next = head;
    head = ptr;
    return;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteLl(Node* &head, int val){
    Node* prev = head;
    Node* temp = head->next;
    while(temp->data != val && temp != NULL){
        prev = prev->next;
        temp = temp->next;
    }
    if(temp->data == val){
        prev->next = temp->next;
        delete temp;
    }
}

void search(Node* head, int key){
    Node* temp = head;
    int index=0;
    while(temp!=NULL){
        index++;
        if(temp->data == key){
            cout << "Element is present at index " << index << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Element is not present" << endl;
}

//----------------------- Append Last K Nodes ---------------------//
void append(Node* &head, int n){
    if(n == 0){
        return;
    }
    Node* newHead = head;
    Node* newTail = head;
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    while(n-1){
        newTail = newTail->next;
        n--;
    }
    newHead = newTail->next;
    tail->next = head;
    head = newHead;
    newTail->next = NULL;
}

int main(){
    Node* head = NULL;
    // push(head, 9);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    // deleteLl(head, 2);
    display(head);
    append(head, 4);
    display(head);
    // search(head, 3);
    return 0;
}