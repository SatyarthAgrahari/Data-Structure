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
	printf("Elements are:");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
//Binary Search using Loop.
/*int Bsearch(struct Array arr,int key)
{
	int l,h,mid;
	l=0;
	h=arr.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
		return mid;
		else if(key<arr.A[mid])
		 h=mid-1;
		else
		l=mid+1;
		
	}
	return -1;
}*/
//Binary Search using Recusion.
int RBsearch(int a[],int l,int h,int key)
{
	int mid;
	
	if(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
		return mid;
		else if(key<a[mid])
	    return RBsearch(a,l,mid-1,key);
		else
	    return	RBsearch(a,mid+1,h,key);
	}
	return -1;
}
int main(void) {
 struct Array arr1={{2,3,4,5,6},10,5};
 printf("%d\n",RBsearch(arr1.A,0,arr1.length-1,5));
 Display(arr1);
 getch();
	return 0;
}
