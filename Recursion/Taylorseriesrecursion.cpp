#include<stdio.h>
#include<conio.h>
double e(int,int);
double e(int x, int n)
{
 static double p=1,f=1;
 double r;

 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}
int main()
{
	int y,z;
  printf("Enter the power:\n");
	scanf("%d",&y);
  printf("Enter the term:\n");
	scanf("%d",&z);
 printf("%lf \n",e(y,z));
 getch();
 return 0;
}