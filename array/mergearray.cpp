#include <stdio.h>
#include<stdlib.h>
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
struct Array* merge(struct Array *arr3,struct Array *arr4)
{
	int i=0,j=0,k=0;
	struct Array *C=(struct Array*)malloc(sizeof(struct Array));
	
	while(i<arr3->length && j<arr4->length)
	{
		if(arr3->A[i]<arr4->A[j])
		{
		  C->A[k++]=arr3->A[i++];
		}
		else{
			C->A[k++]=arr4->A[j++];
		}
	}
	for(;i<arr3->length;i++)
	{
		C->A[k++]=arr3->A[i];
	}
	for(;j<arr4->length;j++)
	{
		C->A[k++]=arr4->A[j];
	}
	C->length=arr3->length+arr4->length;
	C->size=10;
	return C;
}
int main(void) {
struct Array arr1={{3,8,16,20,25},10,5};
struct Array arr2={{4,10,12,22,23},10,5};
struct Array *x;
x=merge(&arr1,&arr2);
display(*x);
getch();
return 0;
}
