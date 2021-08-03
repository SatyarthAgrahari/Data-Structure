#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct Queue *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("Queue is Full\n");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
          front=rear=t;
        else{
            rear->next=t;
            rear=t;
        }
    }
  
}
int dequeue()
{
    int x=-1;
    struct node *t=NULL;
    if(front==NULL)
      printf("Queue is Empty\n");
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display()
{
    struct node *p=front;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("%d\n",dequeue());
    display();

}