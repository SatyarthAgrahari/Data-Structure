#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q)
{
    printf("Enter the size\n");
    //scanf("%d",q->size);
    q->size=5;
    q->Q=(int *)malloc(q->size*sizeof(int));
    q->front=q->rear=0;
}
void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is Full\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is Empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue q)
{
    int i=q.front+1;
    do
    {
       printf("%d ",q.Q[i]);
       i=(i+1)%q.size;
    }while (i!=(q.rear+1)%q.size);
}
int main()
{
    struct Queue q;
    create(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    printf("%d\n",dequeue(&q));
    enqueue(&q,50);
    display(q);


}