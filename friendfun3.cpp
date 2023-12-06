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
    friend complex operator+(complex,complex);
};
complex operator+(complex X,complex Y)
{
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return(temp);
}

int main()
{
    complex c1,c2,c3;
    c1.setdata(2,6);
    c2.setdata(3,7);
    c3=c1+c2;
    c3.showdata();
}