#include<stdio.h>
#include<conio.h>
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void BubbleSort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(&A[j], &A[j + 1]);
			}
		}
	}
}
int main()
{
	int A[] = { 10,5,2,14,8,9,6,3,4,11 }, n = 10;
	BubbleSort(A, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}