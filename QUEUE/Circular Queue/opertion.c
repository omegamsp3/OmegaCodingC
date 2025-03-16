#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int size;
    int f;
    int r;
    int* arr;
}queue;

int isFull(queue* q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(queue* q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

void enqueue(queue* q , int val){
    if(isFull(q)){
        printf("\nQUEUE OVERFLOW");
    }
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(queue* q){
    if(isEmpty(q)){
        printf("\nEMPTY QUEUE");
    }
    else{
        q->f = (q->f+1)%q->size;
        int val = q->arr[q->f];
        return val;
    }
}
int main(){
    queue* q;
    q->size = 10;
    q->f = q->r = 0;
    q->arr = (int*)malloc(q->size * sizeof(int));

    enqueue(q,5);
    enqueue(q,8);
    enqueue(q,11);
    enqueue(q,15);
    enqueue(q,18);
    enqueue(q,21);

    int result = dequeue(q);
    printf("%d",result);
    return 0;
}