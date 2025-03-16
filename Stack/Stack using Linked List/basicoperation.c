#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void display(struct node* ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(node* top){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int isFull(node* top){
    node* p = (node*)malloc(sizeof(node));
    if(p==NULL){
        return 1;
    }
    return 0;
}

node* push(node* top,int x){
    node* n = (node*)malloc(sizeof(node));
    if(isFull(top)){
        printf("STACK OVERFLOW\n");
    }
    else{
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(node** top){
    if(isEmpty(*top)){
        printf("STACK UNDERFLOW\n");
    }
    else{
        node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(x);
        return x;
    }
}

int peek(node* top,int pos){
    node* ptr = top;
    for(int i = 0 ; (i<pos-1 && ptr!=NULL) ; i++){
        ptr = ptr->next;
    }

    if(ptr!=NULL){
        return ptr->data;
    }
    return -1;
}

int stackTop(node* top){
    return top->data;
}

int stackBottom(node* top){
    node* ptr = top;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    if(ptr->next == NULL){
        return ptr->data;
    }
    return -1;
}

int main(){
    node* top = NULL;
    top = push(top,5);
    top = push(top,3);
    top = push(top,6);
    top = push(top,8);
    top = push(top,18);
    top = push(top,20);

    printf("\n\nLINKED LIST !!\n");
    display(top);

    int stack_Top = stackTop(top);
    printf("\n\nTOP OF STACK : %d",stack_Top);

    int stack_Bottom = stackBottom(top);
    printf("\n\nBottom of stack : %d",stack_Bottom);

    int result = peek(top,2);
    printf("\n\nSearched element : %d",result); 

    int element = pop(&top);
    printf("\nPopped element is : %d",element);
    printf("\n\nUPDATED LINKED LIST !! \n");
    display(top);

    return 0;
}