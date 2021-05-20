#include <stdio.h>
#include<conio.h>
int pow(int,int);
int main(void) {
	int y,x,l,z,a;
	printf("Enter the value and power respectively:\n");
	scanf("%d",&x);
	z=x;
	scanf("%d",&l);
	a=l;
	y=pow(z,a);
	printf("value is:%d",y);
    getch();
	return 0;
}
int pow(int m, int n)
{
	if(n==0)
	  return 1;
return pow(m,n-1)*m;
}
