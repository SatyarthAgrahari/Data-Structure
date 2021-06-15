#include <stdio.h>
#include <conio.h>
struct array
{
    int A[10];
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    printf("\nElements are:\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void duplicate(struct array arr)
{
    int i,ldup=0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==arr.A[i+1] && arr.A[i]!=ldup)
        {
            printf("\n%d\n",arr.A[i]);
            ldup=arr.A[i];
        }
    }
}
void cduplicate(struct array arr)
{
    int i,j,c=0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==arr.A[i+1] && arr.A[i]!=c)
        {
            j=i;
            while(arr.A[i]==arr.A[j])
            {
                j++;
            }
            printf("\n%d is appearing %d times\n",arr.A[i],j-i);
            c=arr.A[i];
        }
    }
}
int main()
{
    struct array arr1={{3,6,8,8,10,12,15,15,15,20},10,10};
    duplicate(arr1);
    cduplicate(arr1);
    display(arr1);
}