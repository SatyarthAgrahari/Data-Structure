#include<iostream>
using namespace std;
struct rectangle 
{
    int l;
    int b;
};
int main()
{
     rectangle r={10,22};
     cout<<r.l<<endl<<r.b<<endl; //normal variable use dot(.) operator
     rectangle *p=&r;
     p->l=9;
     p->b=20;
     cout<<p->l<<endl<<p->b<<endl; //pointer use arrow (->)
    return 0;



}