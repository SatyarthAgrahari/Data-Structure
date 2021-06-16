#include<stdio.h>
//#include<conio.h>
struct array
{
    int A[10];
    int size;
    int length;
};
int main()
{
    struct array arr={{5,8,3,9,6,2,10,7,-1,4},10,10};
    int i;
    int min=arr.A[0];
    int max=arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        {
            max=arr.A[i];
        }
        else if(arr.A[i]<min)
        {
            min=arr.A[i];
        }
    }
    printf("max=%d\nmin=%d",max,min);
    
}