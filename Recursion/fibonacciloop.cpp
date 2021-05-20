#include <stdio.h>
#include<conio.h>
int main(void) {
	int i,t0=0,t1=1,s=0,n;
	printf("Enter the number: \n");
	scanf("%d",&n);
	if(n<=1)
	  return n;
	for(i=2;i<=n;i++)
	{
	   s=t0+t1;
	   t0=t1;
	   t1=s;
	}
	printf("%d",s);
    getch();
	return 0;
}
