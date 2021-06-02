#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
struct array
{
	int A[10];
	int size;
	int length;
};
void display(struct array arr)
{
	int i;
	printf("Elements are:\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d \n",arr.A[i]);
	}
}
struct array* Union(struct array *arr1,struct array *arr2)
{
	int i=0,j=0,k=0;
	struct array *p;
	p=(struct array*)malloc(sizeof(struct array));
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		{
			p->A[k++]=arr1->A[i++];
		}
		else if(arr2->A[j]<arr1->A[i])
		{
			p->A[k++]=arr2->A[j++];
		}
		else{
			p->A[k++]=arr1->A[i++];
			j++;
		}
	}
	for(;i<arr1->length;i++)
	{
		p->A[k++]=arr1->A[i];
	}
	for(;j<arr2->length;j++)
	{
		p->A[k++]=arr2->A[j];
	}
	p->length=k;
	p->size=10;
	return p;
}
int main(void) {
	struct array arr1={{3,4,5,6,10},10,5};
	struct array arr2={{2,4,5,7,12},10,5};
	struct array *x;
	x=Union(&arr1,&arr2);
	display(*x);
    getch();
	return 0;
}
