#include <stdio.h>
#include<conio.h>
double e(double ,double);
int main(void) {
	int a,z;
	printf("Enter the power:\n");
	scanf("%d",&a);
	printf("Enter the term:\n");
	scanf("%d",&z);
	printf("%lf",e(a,z));
	getch();
	return 0;
}
double e(double x,double n)
{
	static double s=1;
	if(n==0)
    	return s;
s=1+x/n*s;
return e(x,n-1);
}
