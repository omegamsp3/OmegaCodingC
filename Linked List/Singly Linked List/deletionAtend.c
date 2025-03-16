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

node* deletion(node* head){
    node* p = head;
    node* q = p->next;

    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main(){
    node* head = NULL;
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    head = create(n);
    printf("\nLINKED LIST\n");
    display(head);

    printf("\nUPDATED LINKED LIST\n");
    head = deletion(head);
    display(head);
    return 0;
}