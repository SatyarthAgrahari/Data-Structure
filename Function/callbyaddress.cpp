#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"first no."<<x<<endl;
    cout<<"second no."<<y<<endl;
    swap(&x,&y);
    cout<<"first no."<<x<<endl;
    cout<<"second no."<<y<<endl;
    return 0;


}