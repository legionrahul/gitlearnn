#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void showdata()
    {
        cout<<a<<b;
    }
    friend complex operator -(complex);
};
complex operator-(complex X)
{
    complex t;
t.a=-X.a;
t.b=-X.b;
return(t);    
}
int main()
{
    complex c1,c2;
    c1.setdata(3,5);
    c2=-c1;
    c2.showdata();
}