/*function overload*/
#include<iostream>
using namespace std;
int area (int x,int y)
{
    return(x*y);
}
float area(float x)
{
    return(3.14*x*x);
}
int main()
{    float r;
    cout<<"enter radius of circle";
    cin>>r;
    cout<<area(r);
    int l,b;
    cout<<"enter l and b";
    cin>>l>>b;
    cout<<area(l,b);
}
