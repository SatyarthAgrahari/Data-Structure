#include<stdio.h>
#include<conio.h>
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void pairsum(struct array arr,int k)
{
    int i=0,j=arr.length;
    while (i<j)
    {
        if(arr.A[i]+arr.A[j]==k)
        {
            printf("%d + %d = %d\n",arr.A[i],arr.A[j],k);
            i++;
            j--;
        }
        else if(arr.A[i]+arr.A[j]<k)
        {
            i++;
        }
        else{
            j--;
        }
    }
    
}
int main()
{
struct array arr1={{1,3,4,5,6,8,9,10,12,14},10,10};
pairsum(arr1,10);
display(arr1);
getch();
return 0;
}