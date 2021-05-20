#include<stdio.h>
int main()
{
    int x=10,y=5;
    x=x++ + ++y;
    y=--y + x++;
    printf("%d %d",x,y);
    return 0;
}