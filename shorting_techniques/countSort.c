#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int maximum(int B[],int t)
{
	int i;
	int x = B[0];
	for (i = 0; i < t; i++)
	{
		if (B[i] > x)
			x = B[i];
	}
	return x;
}
void countSort(int A[], int n)
{
	int* c;
	int m= maximum(A, n);
	c = (int*)malloc(m+1 * sizeof(int));
	for (int i = 0; i < m + 1; i++)
	{
		c[i] = 0;
	}
	for (int i = 0; i < m + 1; i++)
		c[A[i]]++;
	int i = 0, j = 0;
	while (i <= m + 1)
	{
		if (c[i] > 0)
		{
			A[j++] = i;
			c[i]--;
		}
		else i++;
	}
	free(c);
}
int main()
{
	int A[] = { 15,10,5,6,3,2,9,5}, n = 8;
	countSort(A, n);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	return 0;

}