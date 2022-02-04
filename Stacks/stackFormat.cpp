#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int* arr;
};

bool isFull(struct Stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isEmpty(struct Stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack* &ptr, int data){
    if(isFull(ptr)){
        printf("Stack Overflow!");
        return;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data; 
        return;
    }
}

int pop(struct Stack* &ptr){
    if(isEmpty(ptr)){
        printf("Stack is Empty!");
        return -1;
    }
    else{
        int data = ptr->arr[ptr->top];
        ptr->top--; 
        return data;
    }
}

int main(){
    struct Stack * sp = (struct Stack *) malloc (sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc (sp->size * sizeof(int)); 
    push(sp, 10);
    push(sp, 20);
    push(sp, 30);
    push(sp, 40);
    push(sp, 50);
    printf("%d ",pop(sp));
    printf("%d ",pop(sp));
    printf("%d ",pop(sp));
    printf("%d ",pop(sp));
    printf("%d ",pop(sp));
    printf("%d ",pop(sp));
    return 0;
}