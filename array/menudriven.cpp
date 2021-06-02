#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void display(struct array arr1)
{
   int i;
   printf("\nElements are:\n");
   for(i=0;i<arr1.length;i++)
      printf("%d "arr1.A[i]);
}
void insert(struct array *arr1,int index,int x)
{
    int i;
    if(index>=0 && index<=arr1->length)
    {
     for(i=arr1->length;i>index;i--)
      {
        arr1->A[i]=arr1->A[i-1];
      }
     arr1->A[index];
     arr1->length++;
    }
}
int delete(struct array *dlt,int index)
{
   int x=0;
   if(index>=0 && index<dlt->length)
   {
       x=dlt->A[index];
        for(int i=index;i<=dlt->length-1;i++)
        {
            dlt->A[i]=dlt->A[i+1];
            dlt->length--;
            return x;
        }
        return 0;
   }
}
int search(struct array *arr1,int x)
{
    int i;
    for(i=0;i<arr1->length;i++)
    {
        if(arr1->A[i]==x)
        {
          swap(&arr1->A[i],&arr1->A[0]);
          return i;
          break;
        }
    }
    return 0;
}
int sum(struct array arr1)
{
    int s=0,i;
    for(i=0;i<arr1.length;i++)
    {
      s=s+arr1.A[i];
    }
    return s;
}
int menu();
{
    int ch;
    printf("1.INSERT.\n");
    printf("2.DELETE.\n");
    printf("3.SEARCH.\n");
    printf("4.SUM.\n");
    printf("5.DISPLAY.\n");
    printf("6.EXIT.\n");
    printf("Enter your choice:\n");
    scanf("%d ",&ch);
    return ch;
}
int main()
{
    struct array arr;
    int e,i,a,s;
    printf("Enter the size of array:\n");
    scanf("%d ",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(struct array));
    arr.length=0;
    while(1){
         system("CLS");
    switch (menu())
    {
    case 1:
        printf("Enter the Array Index and Element:");
        scanf("%d %d",&i,&e);
        insert(&arr,i,e);
        break;
    case 2:
        printf("Enter the Index:");
        scanf("%d",&a);
        printf("%d",delete(&arr,a));
        break;
    case 3:
        printf("Enter the value:");
        sacanf("%d",&s);
        search(&arr,s);
        break;
    case 4:
        sum(arr);
        break;
    case 5:
        display(arr);
        break;
    case 6;
        exit(1);
    }
    }
   getch();
   return 0;
}