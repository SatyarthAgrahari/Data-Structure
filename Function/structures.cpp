#include<iostream>
using namespace std;
struct rectangle
{
    int l;
    int b;
};

int main ()
{
    struct rectangle r={9,11};
    r.l=20;
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    return 0;
  

}