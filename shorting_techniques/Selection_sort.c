#include<stdio.h>
#include<conio.h>
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void SelectionSort(int A[], int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = k = i; j < n; j++)
		{
			if (A[j] < A[k])
			{
				k = j;
			}
		}
			swap(&A[i], &A[k]);
		
	}
}
int main()
{
	int A[]={ 10,9,5,7,1,2,3,11,14,13 }, n = 10;
	SelectionSort(A, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}