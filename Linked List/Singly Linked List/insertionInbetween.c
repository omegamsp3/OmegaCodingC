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
    node* temp = NULL;
    node* head = NULL;
    node* ptr = NULL;

    for(int i = 0 ; i<n ; i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&temp->data);
        temp->next = NULL;

    if(head==NULL){
        head=temp;
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

node* insertionAtindex(node* head,int index,int data){
    node* ptr = (node*)malloc(sizeof(node));
    node* p = head;

    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}
int main(){
    int n;
    node* head = NULL;
    printf("Enter number of node : ");
    scanf("%d",&n);

    head = create(n);
    printf("\n---LINKED LIST---\n");
    display(head);

    int index;
    printf("\nEnter position of insertion : ");
    scanf("%d",&index);

    int num;
    printf("\nEnter the number to be inserted : ");
    scanf("%d",&num);

    head = insertionAtindex(head,index,num);
    printf("\n---UPDATED LINKED LIST---\n");
    display(head);
    return 0;
}