#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void push(struct Node ** head, int data){
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = (*head);
    (*head) = ptr;
}

void printList(struct Node * head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

//------------------------- Using Iteration ----------------------------//
struct Node * reverseList(struct Node * head){
    struct Node * next = NULL;
    struct Node * current = head;
    struct Node * prev = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

//------------------------- Using Recursion ----------------------------//
void ReverseList(struct Node * head){
    struct Node * prev = head;

    if(prev->next != NULL){
        head = prev;
        return;
    }
    // struct Node * q = prev->next;
    // q->next = prev;
    // p->next = NULL;
    prev->next->next = prev;
}

//------------------------- First k elements ----------------------------//
struct Node * reverseK(struct Node * head, int k){
    struct Node * prev = NULL;
    struct Node * current = head;
    struct Node * next;
    int count = 0;
    while(current != NULL && count<k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if(next != NULL){
        head->next = reverseK(next, k);
    }
    return prev;
}

int main(){
    struct Node * head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    printf("List Before rev: ");
    printList(head);

    // head = reverseList(head);s
    // ReverseList(head);
    head = reverseK(head, 2);
    printf("\nList After rev: ");
    printList(head);
}