#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Queue{
     int size;
     int front;
     int rear;
     int *Q;
};
void create(struct Queue *q,int size)
{
   // printf("Entert size\n");
   // scanf("%d ",q->size);
    q->size=size;
    q->Q=(int *)malloc(size*sizeof(int));
    q->front=q->rear=-1;
}
void enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        printf("Queue is Full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is Empty");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue q)
{
    struct Queue p=q;
    p.front++;
    while (p.front!=q.rear)
    {
      printf("%d ",p.Q[p.front]);
      p.front++;
    }
}
int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    display(q);

  



}