#include<stdio.h>
#include<conio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int LinearSearch(struct Array arr,int key)
{
 int i;
 for(i=0;i<arr.length;i++)
 {
 if(key==arr.A[i])
 {
 return i;
 }
 }
 return -1;
}
int main()
{
 struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
 printf("%d",LinearSearch(arr1,14));
 Display(arr1);
 getch();
 return 0;
}