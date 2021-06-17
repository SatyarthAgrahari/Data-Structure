#include<stdio.h>
int main()
{
    char A[]="How are   you";
    int i,c=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
}