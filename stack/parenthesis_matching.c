#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    char data;
    struct node *next;
}*top=NULL;
void push(char x)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
      printf("stack is full");
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
char pop()
{
    struct node *p;
    char x=-1;
    if(top==NULL)
     printf("Stack is empty");
    else{
        p=top;
        top=top->next;
        x=p->data;
        free(p); 
    }
    return x;
}
void display()
{
    struct node *p=top;
    while (p!=NULL)
    {
    printf("%d ",p->data);
    p=p->next;
    }
}
int peek(int pos)
{
    int x=-1;
    struct node *p=top;
    for(int i=0;p!=NULL && i<pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
      return p->data;
    else
      return -1;

}
int stacklTop()
{
    if(top)
     return top->data;
    return -1;
}
int isEmpty()
{
    return top?0:1;
}
int isFull()
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    int r=ptr?0:1;
    free(ptr);
    return r;
}
int isBalance(char *A)
{

    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='(')
           push(A[i]);
        else if(A[i]==')')
        {
            if(isEmpty())
              return 0;
            pop();
        }
    }
    return isEmpty()?1:0;
}
int main()
{
    char *A="((a+b)*(c-d))";
    printf("%d",isBalance(A));
  
    

}