#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head=NULL,*last=NULL;
void create(int A[],int x)
{
    int i;
    struct node *t=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(i=1;i<x;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        last->next=head;
    }

}
void display(struct node *p)
{
    do{
        printf("%d ",p->data);
        p=p->next;
    }
    while(head!=p);
}
void insert(int pos,int n)
{
    int i;
    struct node *s=NULL;
    struct node *t=NULL;
    if(pos==0)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=n;
        t->next=head;
        head=t;
        last->next=head;
    }
    else{
        s=head;
        for(i=0;i<pos-1;i++)
        {
            s=s->next;
        }
        t=(struct node *)malloc(sizeof(struct node));
        t->data=n;
        t->next=s->next;
        s->next=t;
    }
}
void Rdisplay(struct node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        printf("%d ",p->data);
        Rdisplay(p->next);
    }
    flag = 0;
}
int delete(int pos)
{
    struct node *p=NULL,*q=NULL;
    int x,i;
    if(pos==1)
    {
        p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        x=head->data;
        if(p==head){
        free(head);
        head=NULL;
        }
        else{
        p->next=head->next;
        free(head);
        head=p->next;
        }
    }
    else{
        q=p=head;
        for(i=0;i<pos-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}
int main()
{
    int A[]={5,8,11,13,15};
    create(A,5);
   // insert(0,2);
  //  insert(1,12);
    //display(head);
   printf("%d\n",delete(2));
    Rdisplay(head);

}