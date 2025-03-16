#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void display(node* head){
    node* p = head;
    do{
        printf("%d ",p->data);
        p = p->next;
    }while(p!=head);
}

node* creation(int n){
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
            head->next = temp;
        }

        else{
            ptr = head;
            while(ptr->next != head){
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->next = head;
        }
    }
    return head;
}

int main(){
    int n;
    node* head;
    printf("How many nodes : ");
    scanf("%d",&n);
    head = creation(n);
    display(head);
return 0;
}