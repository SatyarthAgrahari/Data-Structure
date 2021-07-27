#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void push(struct stack *p,int x)
{
    if(p->top==p->size-1)
       printf("Stack Overflow");
    else{
        p->top++;
        p->s[p->top]=x;
    }
}
void create(struct stack *st)
{
    printf("Enter size of stack ");
  //scanf("%d",&st->size);
    st->size=5;
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        printf("%d ",st.s[i]);
    }
}
int pop(struct stack *p)
{
    int x=-1;
    if(p->top==-1)
      printf("Stack Underflow");
    else{
        x=p->s[p->top--];
    }
    return x;
}
int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
       printf("Invalid Index");
    x=st.s[st.top-index+1];
    return x;
}
int isEmpty(struct stack st)
{
    if(st.top==-1)
      return 1;
    return 0;
}
int isFull(struct stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    return 0;
}
int stackTop(struct stack st)
{
    if(!isEmpty(st))
      return st.s[st.top];
    return -1;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    printf("%d\n",stackTop(st));

    display(st);
    //getch();

}