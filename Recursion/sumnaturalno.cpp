#include<stdio.h>
#include<conio.h>
int sum(int);
int sum(int n)
{
    if(n==0)
    {
        return n;
        printf("%d",n);
    }
    else
    {
       return sum(n-1)+n;
    }
    getch();
}
int main()
{
    int x,y;
    printf("Enter the number for sum n natural number");
    scanf("%d",&x);
    y=sum(x);
    printf("%d",y);
    getch();
    return 0;
    
}