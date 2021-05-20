#include <stdio.h>
#include <conio.h>
double e(int,int);
int main(void) {
	int a,z;
	printf("Enter the power:\n");
	scanf("%d",&z);
	printf("Enter the term:\n");
	scanf("%d",&a);
	printf("%lf",e(z,a));
	getch();
	return 0;
}
double e(int x,int n)
{
	 double s=1;
	 double num=1.0,den=1.0;
	for(int i=1;i<=n;i++)
	{
		num=num*x;
		den=den*i;
		s=s+num/den;
	}
	return s;
}
