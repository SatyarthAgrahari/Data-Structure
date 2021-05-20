#include<stdio.h>
#include<conio.h>
void display(struct arrray);
void insert(struct array,int,int);
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array see)
{
    for(int i=0;i<see.length;i++)
    {
    printf("%d\n",see.A[i]);
    }
}
void insert(struct array *p,int index,int x)
{
    if(index>=0 && index<=p->length)
    {
       for(int i=p->length;i>index;i--)
           p->A[i]=p->A[i-1];
     p->A[index]=x;
     p->length++;
    }
}
int main()
{
    struct array arr={{3,4,5,6,7},10,5};
    insert(&arr,5,10);
    display(arr);
    getch();
    return 0;
}