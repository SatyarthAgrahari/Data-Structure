#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(struct array);
struct array
{
    int *p;
    int size;
    int length;
};
void display(struct array seen)
{
    printf("\nElements are:\n");
    for(int i=0;i<seen.length;i++)
    {
     printf("%d\n",seen.p[i]);
    }
}
int main()
{
    int n;
struct array arr;
printf("Enter the size of array:");
scanf("%d",&arr.size);
arr.p=(int *)malloc(arr.size*sizeof(int));
arr.length=0;
printf("Enter the number of numbers:");
scanf("%d",&n);
printf("Enter the all elements:");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr.p[i]);
}
arr.length=n;
display(arr);
getch();
return 0;

}