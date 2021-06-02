#include <stdio.h>
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
void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.l;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
//Right shift.
/*
void rshift(struct Array *arr)
{
	int i;
	for(i=arr->l-1;i>=0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
//	arr->A[i]=0;
}
*/
//Right shift.
void rshiftr(struct Array *arr)
{
	int i;
	int a;
	a=arr->A[arr->l-1];
	for(i=arr->l-1;i>=0;i--)
	{
		swap(&arr->A[i],&arr->A[i-1]);
	}
	arr->A[0]=a;
}

int main(void) {
struct Array arr1={{6,3,8,5,9},10,5};
rshiftr(&arr1);
display(arr1);
getch();
	return 0;
}
