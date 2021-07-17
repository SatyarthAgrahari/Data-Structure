#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct element{
int i;
int j;
int x;
};
struct sparse{
    int m;
    int n;
    int num;
    struct element *e;
}*sum; 
void create(struct sparse *s)
{
    int i;
    printf("Enter the Dimensions");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter no. of non zero element");
    scanf("%d",&s->num);
    s->e=(struct element *)malloc(s->num*sizeof(struct element));
    printf("Enter all elements with position");
    for(i=1;i<=s->num;i++)
    {
        scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}
void display(struct sparse s)
{
    int i,j,k=1;
    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j){
              printf("%d  ",s.e[k++].x);
            }
            else{
                printf("0  ");
            }
        }
        printf("\n");
    }
}
int add(struct sparse *s1,struct sparse *s2)
{
    int i=1,j=1,k=1;
    if(s1->m!=s2->m || s1->n!=s2->n)
    {
        return 0;
    }
    sum=(struct sparse *)malloc(sizeof(struct sparse));
    sum->m=s1->m;
    sum->n=s1->n;
    sum->e=(struct element *)malloc((s1->num+s2->num)*sizeof(struct element));
    while(i<=s1->num && j<=s2->num)
    {
      if(s1->e[i].i<s2->e[j].i)
      {
          sum->e[k++]=s1->e[i++];
      }
      else if(s1->e[i].i>s2->e[j].i)
      {
          sum->e[k++]=s2->e[j++];
      }
      else{
          if(s1->e[i].j<s2->e[j].j)
          {
              sum->e[k++]=s1->e[i++];
          }
          else if(s1->e[i].j>s2->e[j].j)
          {
              sum->e[k++]=s2->e[j++];
          }
          else{
              sum->e[k]=s1->e[i++];
              sum->e[k++].x+s2->e[j++].x;
          }
      }
    }
   
}
int main()
{
    struct sparse s1,s2;
    create(&s1);
    create(&s2);
    add(&s1,&s2);
    getch();
    return 0;

}