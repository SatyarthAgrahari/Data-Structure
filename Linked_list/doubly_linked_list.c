#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    struct node *pre;
    int data;
    struct node *next;
}*first=NULL,*last=NULL;
void create(int A[],int x)
{
    struct node *t;
    first=(struct node *)malloc(sizeof(struct node));
    first->pre=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<x;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=last;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void display(struct node *p)
{
    while(p){
      printf("%d ",p->data);
      p=p->next;
    }

}
void insert(int pos,int n)
{
    struct node *t=NULL,*s=first,*k=NULL;
    if(pos==0)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=NULL;
        t->data=n;
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<pos-1;i++)
        {
            s=s->next;
        }
        k=s->next;
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=s;
        t->data=n;
        t->next=s->next;
        s->next=t;
        k->pre=t;
    }

}
int delete(int pos)
{
    int x=-1;
    struct node *p=NULL,*q=NULL,*t=NULL;
    if(pos==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        free(p);
        if(first);
        first->pre=NULL;
    }
    else{
        p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        p->pre->next=p->next;
        if(p->next)
        {
            p->next->pre=p->pre;
        }
        x=p->data;
        free(p);
    }
    return x;

}
int main()
{
 int A[]={5,7,9,11,15};
 create(A,5);
 //insert(0,8);
 printf("%d\n",delete(2));
 display(first);
}