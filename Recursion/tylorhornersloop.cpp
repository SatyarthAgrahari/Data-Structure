#include <stdio.h>
#include<conio.h>
double e(double,double);
int main(void) {
	double x,m;
	printf("Enter the power:\n");
	scanf("%lf",&x);
	printf("Enter the term:\n");
	scanf("%lf",&m);
	printf("%lf",e(x,m));
	getch();
	return 0;
}
double e(double x,double n)
{
	double s=1;
	for(;n>0;n--)
	{
		s=1+x/n*s;
	}
	return s;
}
