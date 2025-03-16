#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int size;
    int f;
    int b;
    int* arr;
}queue;

int isFull(queue* q){
    if(q->b == q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(queue* q){
    if(q->f == q->b){
        return 1;
    }
    return 0;
}

int dequeue(queue* q){
    int val = -1;
    if(isEmpty(q)){
        printf("\nQUEUE UNDERFLOW");
    }
    else{
        q->f++;
        int val = q->arr[q->f];
        return val;
    }
    
}

void enqueue(queue* q , int val){
    if(isFull(q)){
        printf("\nQUEUE OVERFLOW");
    }
    else{
        q->b++;
        q->arr[q->b] = val;
    }
}

int main(){
    queue* q;
    q->size = 10;
    q->f = q->b = -1;
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