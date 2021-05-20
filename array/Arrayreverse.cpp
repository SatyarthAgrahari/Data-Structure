#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Array
{
	int A[10];
	int size;
	int l;
};
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
//1st Method.
/*void Reverse(struct Array *arr)
{
	int *B;
	B=(int *)malloc(arr->l*sizeof(int));
	int i,j;
	for(j=0,i=arr->l-1;i>=0;i--,j++)
	{
		B[j]=arr->A[i];
	}
	for(i=0;i<arr->l;i++)
	{
		arr->A[i]=B[i];
	}
}*/
//2nd Method.
void Reverse2(struct Array *arr)
{
	int i,j;
	for(i=0,j=arr->l-1;i<=j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
	}
}
void Display(struct Array arr)
{
	int i;
	printf("Elements are:");
	for(i=0;i<arr.l;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int main(void) {
	struct Array arr1={{2,3,4,5,6},10,5};
	Reverse2(&arr1);
	Display(arr1);
    getch();
	return 0;
}
