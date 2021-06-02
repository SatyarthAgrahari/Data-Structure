#include <stdio.h>
#include<conio.h>
struct Array
{
	int A[10];
	int size;
	int length;
};
void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void leftside(struct Array *arr)
{
	int i,j;
	i=0;
	j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
}
int main(void) {
 struct Array arr1={{-2,3,-5,6,7,8,-10,-20,5},10,9};
 leftside(&arr1);
 display(arr1);
 getch();
	return 0;
}
