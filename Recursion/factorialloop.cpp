#include <stdio.h>
#include<conio.h>

int main(void) {
	int n,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is: %d",fact);
	getch();
	return 0;
}
