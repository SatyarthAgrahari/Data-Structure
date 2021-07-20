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
    struct node *t=NULL;
    first=(struct node *)malloc(sizeof(struct node));
    first->pre=first;
    first->data=A[0];
    first->next=first;
    last=first;
    for(int i=1;i<x;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->pre=last;
        t->data=A[i];
        t->next=first;
        last->next=t;
        last=t;
        first->pre=last;
    }
}
void display(struct node *p)
{
    do{
    printf("%d ",p->data);
    p=p->next;
    }
    while(p!=first);
}
void insert(int pos,int n)
{
    struct node *temp=NULL,*p=NULL;
    if(pos==0)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=n;
        if(first->next==first)
        {
            first=temp;
            temp->pre=first;
            temp->next=first;
        }
        else{
            temp->next=first;
            temp->pre=last;
            first=temp;
            last->next=first;
        }
    }
    else{
        
        p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        temp=(struct node *)malloc(sizeof(struct node));
        temp->pre=p;
        temp->data=n;
        temp->next=p->next;
        p->next->pre=temp;
        p->next=temp;
      
    }
}
int delete(int pos)
{
    struct node *p=NULL;
    int x;
    if(pos==1)
    {
        p=first;
        if(p->next==first)
        {
            first=NULL;
            free(first);
        }
        else{
            first=first->next;
            first->pre=last;
            last->next=p->next;
            x=p->data;
            free(p);
        }
    }
    else{
        p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        x=p->data;
        p->pre->next=p->next;
        p->next->pre=p->pre;
        free(p);
    }
    return x;
}
int main()
{
    int A[]={4,6,8,10,14};
    create(A,5);
  //  insert(0,9);
  printf("%d\n",delete(5));
    display(first);

}