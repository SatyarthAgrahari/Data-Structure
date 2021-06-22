#include<stdio.h>
int main()
{
    int i;
    char A[]="finding";
    char H[26]={0};
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
      if(H[i]>1)   
      {
          printf("%c ",i+97);
          printf("%d ",H[i]);
      }
    }

}