#include<stdio.h>
#include<string.h>
int validate(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    { 
       if(!(name[i]>='A' && name[i]<='Z') || !(name[i]>='a' && name[i]<='z'))
    
     return 0;
    }
    return 1;
}
int main()
{
    char *A="Ani123";
    if(validate(A))
    {
        printf("Valid string");
    }
    else{
        printf("Invalid string.");
    }
    
}