#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* arr;
}stack;

int isEmpty(stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int isFull(stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}
int main(){
    stack *s = (stack*)malloc(sizeof(stack));
    printf("Enter size of stack : ");
    scanf("%d",&s->size);
    s->top = -1;
    s->arr = (int *) malloc (s->size * sizeof(int));
    printf("\nSTACK HAS BEEN CREATED SUCCESFULLY");

    // CHECK IF STACK IS EMPTY OR NOT
    if(isEmpty(s)){
        printf("\nThe stack is empty");
    }
    else{
        printf("\nThe stack is not empty");
    }


    // CHECK IF STACK IS FULL OR NOT
    if(isFull(s)){
        printf("\nThe stack is Full");
    }
    else{
        printf("\nThe stack is not full");
    }
    return 0;
}