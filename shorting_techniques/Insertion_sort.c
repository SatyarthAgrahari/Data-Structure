#include<stdio.h>
#include<conio.h>
void InsertionSort(int A[], int n)
{
	int i, j, x;
	for (i = 1; i < n; i++)
	{
		j = i - 1;
	    x = A[i];
		while (j > -1 && A[j] > x)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = x;
	}
}
int main()
{
	int A[] = { 10,3,4,2,1,11,9,7,8,6 }, n = 10;
	InsertionSort(A, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;

}