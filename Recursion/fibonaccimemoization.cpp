#include <stdio.h>
#include<conio.h>
int fib(int);
int s[20];
int main(void) {
	int i,x,y;
	scanf("%d",&x);
	for(i=0;i<20;i++)
	{
	s[i]=-1;
	}
	y=fib(x);
	printf("%d",y);
    getch();
	return 0;
}
int fib(int n)
{
	
	if(n<=1){
		s[n]=n;
		return n;
	}
	else
	{
		if(s[n-1]==-1)
		{
			s[n-1]=fib(n-1);
		}
		if(s[n-2]==-1)
		{
			s[n-2]=fib(n-2);
		}
	
	return fib(n-2)+fib(n-1);
	}
}
