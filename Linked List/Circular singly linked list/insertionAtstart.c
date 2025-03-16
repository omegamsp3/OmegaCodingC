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
            head->next = temp;
        }
        else{
            ptr = head;
            while(ptr->next!=head){
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->next = head;
        }
    }
    return head;

}
node* insertion(node* head,int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    node* p = head->next;
    
    while(p->next!=head){
        p = p->next;
    }
    p->next = temp;
    temp->next = head;
    head = temp;
    return head;
}
int main(){
    int n;
    node* head;
    printf("How many nodes : ");
    scanf("%d",&n);
    head = create(n);
    printf("\nLinked list\n");
    display(head);

    int data;
    printf("\nEnter data to insert : ");
    scanf("%d",&data);
    head = insertion(head,data);
    printf("\nUPDATED LINKED LIST\n");
    display(head);
return 0;
}