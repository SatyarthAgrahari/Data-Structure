#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    p[0]=5;p[1]=22;p[2]=3;p[3]=6;p[4]=8;

    for(int i=0;i<5;i++)
    {
      cout<<p[i]<<endl;
    }
    delete []p;
    return 0;
}