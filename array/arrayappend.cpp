#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(struct array,int);
void display(struct array);
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array seen)
{
    printf("\nElements are:\n");
    for(int i=0;i<seen.length;i++)
    {
     printf("%d\n",seen.A[i]);
    }
}
void add(struct array *addition,int x)
{
    if(addition->length<addition->size)
    {
         addition->A[addition->length++]=x;
    }
    
}

int main(void)
{
    struct array arr={{2,4,5,6,7},10,5};
    add(&arr,811);
    display(arr);
    getch();
    return 0;
}
