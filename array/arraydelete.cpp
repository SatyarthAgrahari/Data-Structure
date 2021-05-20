#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Display(struct array);
int Delete(struct array,int);
struct array
{
    int A[10];
    int size;
    int length;
};
int Delete(struct array *dlt,int index)
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
void Display(struct array see)
{
    int i;
    for(i=0;i<see.length;i++)
    {
        printf("\n%d\n",see.A[i]);
    }
}
int main()
{
  system("CLS");
  struct array arr={{2,3,4,5,6},10,5};
  printf("%d\n",Delete(&arr,4));
  Display(arr);
  getch();
  return 0;
}