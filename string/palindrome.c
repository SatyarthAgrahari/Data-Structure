#include<stdio.h>

int main()
{
    char A[10]="aba";
    char B[10];
    printf("Enter string:\n");
   // gets(A);
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    for(i=0,j=0; A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {
            break;
        }
    }
    if(A[i]==B[j])
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    
    


}