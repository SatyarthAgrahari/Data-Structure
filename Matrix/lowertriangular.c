#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *A;
    int i,j,n,ch,x,y;
    printf("Enter the size");
    scanf("%d",&n);
    y=n*(n+1)/2;
    A=(int *)malloc(y*sizeof(int));
    do{
        system("CLS");
        printf("1. Create\n");
        printf("2. Set\n");
        printf("3. Get\n");
        printf("4. Display\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("Enter the elements %d\n",y);
                   for(i=1;i<=y;i++)
                   {
                       scanf("%d",&A[i-1]);
                   }
                break;
            case 2:
                  printf("Enter the row, column and value:\n");
                  
                  scanf("%d %d %d",&i,&j,&x);
                  if(i>=j)
                  {
                      A[(i*(i-1)/2)+j-1]=x;
                  }
                break;
            case 3:
                  printf("Enter the index\n");
                  scanf("%d %d",&i,&j);
                  if(i>=j)
                  {
                      printf("%d",A[(i*(i-1)/2)+j-1]);
                  }
                  getch();
                break;
            case 4:
                  for(i=1;i<=n;i++)
                  {
                      for(j=1;j<=n;j++)
                      {
                          if(i>=j)
                          {
                              printf("%d ",A[(i*(i-1)/2)+j-1]);
                          }
                          else 
                          printf("0 ");
                      }
                      printf("\n");
                  }
                getch();
        }      
    }
    while (ch<5);
    getch();
    return 0;
}