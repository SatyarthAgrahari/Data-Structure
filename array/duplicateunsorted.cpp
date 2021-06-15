#include <stdio.h>
struct array 
{
	int A[10];
	int length;
	int size;
};
void display(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
void unsorteddup(struct array arr)
{
	int i,j;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]!=-1)
		{
			int c=1;
			for(j=i+1;j<arr.length;j++)
			{
				while(arr.A[i]==arr.A[j])
				{
					arr.A[j]=-1;
					c++;
				}
			}
			if(c>1){
			printf("%d is %d times\n",arr.A[i],c);
		}
		
		}
		
	}
}
int main(void) {
	struct array arr1={{2,10,5,5,6,8,8,8,5,9},10,10};
	unsorteddup(arr1);
	display(arr1);
	return 0;
}
