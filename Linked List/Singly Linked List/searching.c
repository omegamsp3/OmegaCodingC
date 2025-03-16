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

int search(node* head,int num){
    node* p = head;
    int index = 0;
    while(p!=NULL){
        if(p->data == num){
            return index;
        }
        p = p->next;
        index++;
        
    }
    return -1;
}
int main(){
    int n;
    node* head;
    printf("How many nodes : ");
    scanf("%d",&n);
    head = create(n);
    display(head);

    int num;
    printf("\n\nEnter number to be searched : ");
    scanf("%d",&num);
    int result = search(head,num);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at index : %d",result);
    }
return 0;
}