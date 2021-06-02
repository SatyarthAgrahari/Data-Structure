#include<stdio.h>
#include<conio.h>
#include <stdio.h>
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
//Left shift.
/*
void lshift(struct Array *arr)
{
	int i;
	for(i=0;i<arr->l;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->l-1]=0;
}*/
//Left Shift Rotation.
void lshiftr(struct Array *arr)
{
	int i;
	int a;
	a=arr->A[0];
	for(i=0;i<arr->l;i++)
	{
		swap(&arr->A[i],&arr->A[i+1]);
	}
	arr->A[arr->l-1]=a;
}

int main(void) {
struct Array arr1={{6,3,8,5,9},10,5};
lshiftr(&arr1);
display(arr1);
getch();
	return 0;
}
