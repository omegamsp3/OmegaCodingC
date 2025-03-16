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

int pop(stack* ptr){
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
}

int peek(stack* sp,int i){
    if(sp->top-i+1 < 0){
        printf("INVALID");
        return INT_MIN;
    }
    else{
        return sp->arr[sp->top-i+1];
    }
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

    //pop(s);

    for(int i = 1 ; i<=s->top+1 ; i++){
        printf("\nThe value at position %d is %d",i,peek(s,i));
    }
    
}