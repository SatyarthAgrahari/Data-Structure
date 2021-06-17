#include<stdio.h>
int main()
{
    char A[]="Awesome";
    int i,Vcount=0,Ccount=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a' || A[i]=='e' ||A[i]=='i' || A[i]=='o'||A[i]=='u' || A[i]=='A'||A[i]=='E' || A[i]=='I'||A[i]=='O' || A[i]=='U')
        {
            Vcount++;
        }
        else{
            Ccount++;
        }
    }
    printf("Vowels=%d Consonents=%d",Vcount,Ccount);
    
}