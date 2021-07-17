#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int i,j,n,ch,x;
    int *A;
    printf("Enter the size:");
    scanf("%d",&n);
    A=(int *)malloc(n*sizeof(int));
   
    do{
        system("CLS"); 
        printf("1. Create\n");
        printf("2. Set\n");
        printf("3. Get\n");
        printf("4. Display\n");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
               printf("Enter the Elements\n");
               for(i=1;i<=n;i++)
               {
                   scanf("%d",&A[i-1]);
               }
            
            break;
        case 2:
               printf("Enter row, column and value:");
               scanf("%d %d %d",&i,&j,&x);
               if(i==j)
               {
                 A[i-1]=x;
               }
            break;
        case 3:
               printf("Enter Indexes:");
               scanf("%d %d",&i,&j);
               if(i==j)
               {
                   printf("%d ",A[i-1]);
               }
               else{
                   printf("0");
               }
            break;
        case 4:
               for(i=1;i<=n;i++)
               {
                   for(j=1;j<=n;j++)
                   {
                       if(i==j)
                       {
                           printf("%d ",A[i-1]);
                       }
                       else{
                           printf("0 ");
                       }
                   }
                   printf("\n");
               }
            getch();
        }

    }
    while(ch<5);
    getch();
    return 0;


}