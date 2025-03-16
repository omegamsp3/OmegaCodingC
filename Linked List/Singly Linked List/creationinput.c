#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void display(struct node* ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

node* create(int n){
    node* head = NULL;
    node* temp = NULL;
    node* ptr = NULL;
    for(int i = 0 ; i<n ; i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter data : ",i+1);
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

int main(){
    int n;
    node* head;
    printf("How many nodes : ");
    scanf("%d",&n);
    head = create(n);
    display(head);
return 0;
}