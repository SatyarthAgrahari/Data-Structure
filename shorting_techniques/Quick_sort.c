#include<stdio.h>
#include<conio.h>
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partitioning(int A[], int l, int h)
{
	int i, j, pivot;
	i = l;
	j = h;
	pivot = A[l];
	do {
		do { i++; } while (A[i] <= pivot);
		do { j--; } while (A[j] > pivot);
		if (i < j) swap(&A[i], &A[j]);
	} while (i < j);
	swap(&A[l], &A[j]);
	return j;
}
void QuickSort(int A[], int l,int h)
{
	int j;
	if (l < h)
	{
		j = partitioning(A, l, h);
		QuickSort(A, l, j);
		QuickSort(A, j + 1, h);
	}
}
int main()
{
	int A[] = { 10,8,6,4,3,2,1,7,5,9,_CRT_INT_MAX}, n = 11,l=0,h=10;
	QuickSort(A, l, h);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;

}