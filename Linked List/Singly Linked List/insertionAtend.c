#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

void display(node* ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}


node* create(int n){
    node* head = NULL;
    node* temp = NULL;
    node* ptr = NULL;

    for(int i = 0 ; i<n ; i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&temp->data);
        temp->next = NULL;

    if(head==NULL){
        head = temp;
    }
    else{
        ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
return head;
}


node* insertionEnd(node* head,int data){
    node* ptr = (node*)malloc(sizeof(node));
    node* p = head;
    ptr->data = data;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(){
    node* head = NULL;
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    head = create(n);
    printf("\n---LINKED LIST---\n");
    display(head);

    int num;
    printf("\nEnter the number we want to insert at the end : ");
    scanf("%d",&num);

    head = insertionEnd(head,num);
    printf("\n---UPDATED LINKED LIST---\n");
    display(head);

    return 0;
}