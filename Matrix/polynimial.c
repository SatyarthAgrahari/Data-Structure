#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
struct term
{
    int coeff;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};
int main()
{
int i,sum=0,x;
struct poly p;
printf("No. of non zero term ");
scanf("%d",&p.n);
p.t=(struct term *)malloc(sizeof(struct term));
printf("Enter Polynomial term\n");
for(i=0;i<p.n;i++)
{
    printf("term no. %d  ",i);
    scanf("%d %d",&p.t[i].coeff,&p.t[i].exp);
}
for(i=0;i<p.n;i++)
{
    printf("+%dX^%d",p.t[i].coeff,p.t[i].exp);
}
printf("\nEnter the value of x for evalution");
scanf("%d",&x);
for(i=0;i<p.n;i++)
{
    sum=sum+(p.t[i].coeff*pow(x,p.t[i].exp));
}
printf("\n%d",sum);
getch();
return 0;

}