#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    a[2]=6;
    a[3]=1;
    for(int i=0;i<10;i++)
    {
      cout<<a[i]<<endl;
    }
      return 0;
}