#include<iostream>
using namespace std;
int add(int a,int b) //a and b are formal variable.
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x=10,y=33,z;
    z=add(x,y);  //x and y actual variables.
    cout<<z<<endl;
    return 0;
}