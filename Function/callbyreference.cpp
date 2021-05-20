#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=5,y=3;
    cout<<"1st no."<<x<<endl;
    cout<<"2nd no."<<y<<endl;
    swap(x,y);
    cout<<"1st no."<<x<<endl;
    cout<<"2nd no."<<y<<endl;
    return 0;
}