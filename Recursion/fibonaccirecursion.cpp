#include <stdio.h>
#include <conio.h>
int fib(int);
int main(void) {
	int n,y;
	scanf("%d",&n);
	y=fib(n);
	printf("%d",y);
    getch();
    return 0;
	
}
int fib(int x)
{
	if(x<=1)
	{
		return x; 
	}
	return fib(x-2)+fib(x-1);
}