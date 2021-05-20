#include <stdio.h>
#include <conio.h>
int fact(int);
 int main()
 {
	int y,a;
	printf("Enter the number:\n");
	scanf("%d",&y);
	a = fact(y);
	printf("Factorial is: %d",a);
    getch();
	return 0;
}
int fact(int n)
{
	int s;
	if(n==0)
	return(1);
	if(n>0)
	s=fact(n-1)*n;
	return(s);
}