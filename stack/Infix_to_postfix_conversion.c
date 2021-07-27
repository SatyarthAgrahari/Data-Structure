#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 0;
    else 
        return 1;
}
int pre(char x)
{
    if(x=='+'||x=='-')
       return 1;
    else if(x=='*'||x=='/')
       return 2;
    return 0;
}
char* convert(char *infix)
{
    int len=strlen(infix);
    char *postfix=(char *)malloc((len+2)*sizeof(char));
    int i=0,j=0;
    while (infix[i]!='\0')
    {
        if(isOperand(infix[i]))
          postfix[j++]=infix[i++];
        else{
            if(pre(infix[i])>pre(top->data))
            {
              push(infix[i++]);
            }
            else{
                postfix[j++]=pop();
            }
        }
        
    }
    while (!isEmpty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char *infix="a+b*c-d/e";
    push('#');
    char *p=convert(infix);
    printf("%s",*p);

}