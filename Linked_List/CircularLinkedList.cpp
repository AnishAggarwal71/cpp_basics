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

void push(Node* &head, int data){
    Node* n = new Node(data);

    if(head == NULL){
        n->next = n;
        head = n;
        
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int data){
    if(head == NULL){
        push(head, data);
        return;
    }
    Node* n = new Node(data);
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtFirst(Node* &head){
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* todelete = head;
    head = todelete->next;
    temp->next = head;
    delete todelete;
}

void deletion(Node* &head, int pos){
    Node* temp = head;
    count = 1;
    if(pos == 1){
        deleteAtFirst(head);
        return;
    }

    while(count != pos-1){
        temp = temp->next;
        count++;
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
}

void printList(Node * head){
    Node * ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr!=head);
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    push(head, 0);

    printList(head);
    return 0;
}