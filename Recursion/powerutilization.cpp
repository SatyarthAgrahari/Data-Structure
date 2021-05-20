#include <stdio.h>
#include <conio.h>
int pow(int,int) ;

int main(void) 
{
	int x,l,y,z,a;
	printf("Enter the value and power respectively:\n");
	scanf("%d",&x);
	z=x;
	scanf("%d",&y);
	a=y;
	l=pow(z,a);
	printf("value is: %d",l);
    getch();
	
}
int pow(int m,int n)
{
	if(n==0)
	return 1;
	if(n%2==0)
	{
		return pow(m*m,n/2);
	}
	else
	{
		return m*pow(m*m,(n-1)/2);
	}
}