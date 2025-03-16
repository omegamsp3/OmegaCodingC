#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct stack{
    int size;
    int top;
    int *arr;
}stack;

void push(stack* sp,int val){
    sp->top++;
    sp->arr[sp->top] = val;
}

int stackTop(stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(stack* sp){
    return sp->arr[0];
}

int main(){
    stack *s = (stack*)malloc(sizeof(stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    push(s,7);
    push(s,5);
    push(s,12);
    push(s,8);
    push(s,6);

    printf("\nThe top element of stack is : %d",stackTop(s));
    printf("\nThe bottom element of stack is : %d",stackBottom(s));
    return 0;
}