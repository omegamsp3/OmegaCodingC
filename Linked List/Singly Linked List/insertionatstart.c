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
    node* p = NULL;

    for(int i = 0 ; i<n ; i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&temp->data);
        temp->next = NULL;

        if(head==NULL){
            head = temp;
        }
        else{
            p = head;
            while(p->next!=NULL){
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

node* insertionStart(node* head,int data){
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
int main(){
    int n;
    node* head = NULL;
    printf("Enter number of node : ");
    scanf("%d",&n);
    int num;
    head = create(n);
    printf("\n-----LINKED LIST-----\n");
    display(head);
    printf("\nEnter the element to be inserted at the beginning : ");
    scanf("%d",&num);
    printf("\n\n-----UPDATED LINKED LIST-----\n");
    head = insertionStart(head,num);
    display(head);
    return 0;
}