#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int n;
  struct node *next;
}*first=NULL,*last=NULL,*second=NULL,*third=NULL;
void create1(int A[],int x)
{
  struct node *p,*last;
  int i;
  first=(struct node *)malloc(sizeof(struct node));
  first->n=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<x;i++)
  {
      p=(struct node *)malloc(sizeof(struct node));
      p->n=A[i];
      p->next=NULL;
      last->next=p;
      last=p;
  }
}
void create2(int A[],int x)
{
  struct node *p,*last;
  int i;
  second=(struct node *)malloc(sizeof(struct node));
  second->n=A[0];
  second->next=NULL;
  last=second;
  for(i=1;i<x;i++)
  {
      p=(struct node *)malloc(sizeof(struct node));
      p->n=A[i];
      p->next=NULL;
      last->next=p;
      last=p;
  }
}
int sum(struct node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->n;
        p=p->next;
    }
    return (sum);
}
int max(struct node *p)
{
    __INT32_TYPE__ m;
    while(p)
    {
        if(p->n>m)
        {
            m=p->n;
            p=p->next;
        }
    }
    return m;
}
void display(struct node *p)
{
  while(p)
  {
      printf("%d ",p->n);
      p=p->next;
  }
}
void insert(int pos,int x)
{
    struct node *t,*p;
    int i;
    if(pos==0)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->n=x;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(i=0;i<pos-1 && p;i++)
        {
            p=p->next;
        }
        if(p)
        {
            t=(struct node *)malloc(sizeof(struct node));
            t->n=x;
            t->next=p->next;
            p->next=t;
        }
    }

}

struct node * search(struct node *p,int key)
{
    struct node *q=NULL;
    while(p)
    {
        if(key==p->n)
        {
            q->next=p->next;
            p->next=first;
            first=p;

            return (p);
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
void insertlast(int x)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->n=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void sortinsert(struct node *p,int x)
{
    struct node *t,*q=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->n=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else{
        while(p && p->n<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
int Count(struct node *p)
{
   int c=0;
   while(p)
   {
       c++;
       p=p->next;
   }
   return (c);
}
int delete(int pos)
{
    struct node *p,*q;
    int x=-1,i;
    if(pos==0)
    {
        p=first;
        first=first->next;
        x=p->n;
        free(p);
    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<=pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            x=p->n;
            free(p);
        }
    }
    return x;
}
int checksort(struct node *p)
{
   int x=-32768;
    while(p!=NULL)
    {
        if(p->n<x)
        {
            return 0;
        }
        x=p->n;
        p=p->next;
    }
    return 1;
}
void remove_duplicate(struct node *p)
{

    p=first;
    struct node *q=first->next;
    while(q)
    {
        if(p->n!=q->n)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
          
        }
    }
}
void reverse1(struct node *p)
{
    int A[10];
    p=first;
    int i=0;
    while(p)
    {
        A[i]=p->n;
        p=p->next;
        i++;
    }
    p=first;i--;
    while(p)
    {
        p->n=A[i--];
        p=p->next;
    }

}
void concatenating(struct node *p,struct node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
void merge(struct node *p,struct node *q)
{
    struct node *last;
    if(p->n<q->n)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        last->next=NULL;

    }
    while (p && q)
    {
        if(p->n<q->n)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;

        }
    }
    if(p)
    {
        last->next=p;
    }
    else{
        last->next=q;
    }


}
int check_loop(struct node *f)
{
  struct node *p,*q;
  p=q=f;
  do{
      p=p->next;
      q=q->next;
      q=q?q->next:q;
  }
  while(p && q && p!=q);
  return p==q?1:0;
}
int main()
{
  //  struct node *t1,*t2;
 int A[]={10,20,30,40,50};
 //int B[]={9,25,28,35,66};
 //int x;

 create1(A,5);
// t1=first->next->next;
// t2=first->next->next->next->next;
 //t2->next=t1;
 /*display(first);
 printf("\n"); */
// create2(B,5);
 //display(second);

 //sortinsert(first,9);
// display(first);
// printf("\n%d",Count(first));
 //printf("\n%d",sum(first));
 // printf("\n%d",max(first));
 //printf("\nEnter the value want to search");
 //scanf("%d",&x);
//printf("\n%d",search(first,5));
//insert(0,5);
//printf("Enter the value");
//scanf("%d",&x);
//insertlast(x);
/*printf("%d\n",delete(1));//5
printf("%d\n",delete(3));//12
printf("%d\n",delete(5));//44
printf("%d\n",delete(7));//57 */
/*if(checksort(first))
{
    printf("Sorted\n");
}
else{
    printf("Unsorted\n");
}*/
//remove_duplicate(first);
//reverse1(first);
/*printf("\n");
merge(first,second);
display(third);*/

    printf("%d",check_loop(first));
}