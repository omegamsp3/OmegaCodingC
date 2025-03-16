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

void push(stack* ptr,int value){
    if(isFull(ptr)){
        printf("\nSTACK OVERFLOW\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(stack* ptr){
    if(isEmpty(ptr)){
        printf("\nSTACK UNDERFLOW\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main(){
    stack *s = (stack*)malloc(sizeof(stack));
    printf("Enter size of stack : ");
    scanf("%d",&s->size);
    s->top = -1;
    s->arr = (int *) malloc (s->size * sizeof(int));
    printf("\nSTACK HAS BEEN CREATED SUCCESFULLY\n");

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int value;
    for(int i = 0 ; i<n ; i++){
        printf("Enter values in stack : ");
        scanf("%d",&value);
        push(s,value);
    }

    int result;
    for(int i = 0 ; i<n ; i++){
        result = pop(s);  //LIFO RULE
        printf("%d ",result);
    }
    
    return 0;
}