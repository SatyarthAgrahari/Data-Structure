#include <stdio.h>
#include<conio.h>
struct Array 
{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
// Chek Array sorted or not
/*
int sorted(int A[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(A[i]>A[i+1])
		  return 0;
	}
	return 1;
}*/
//Insert element in sorted order.
void Insert(struct Array *arr,int x)
{
	int i;
   i=arr->length-1;
   while(arr->A[i]>x)
   {
   	arr->A[i+1]=arr->A[i];
   	i--;
   }
	arr->A[i+1]=x;
	arr->length++;
	
}
int main(void) {
	struct Array arr1={{4,8,13,16,20,25,28,33},10,8};
	Insert(&arr1,18);
	Display(arr1);
    getch();
	return 0;
}
