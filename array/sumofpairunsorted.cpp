#include <stdio.h>
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
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
void pairsum(struct array arr,int k)
{ int i,j;
	for(i=0;i<arr.length-1;i++)
	{
		for(j=i+1;j<arr.length;j++)
		{
			if(arr.A[i]+arr.A[j]==k)
			{
				printf("%d + %d = %d\n",arr.A[i],arr.A[j],k);
			}
		}
	}
}
int main(void) {
	struct array arr1={{6,3,8,10,16,7,5,2,9,14},10,10};
	pairsum(arr1,10);
	display(arr1);
    getch();
	return 0;
}
