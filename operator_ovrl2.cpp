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
    complex operator +(complex c) //operator is used when we are using sybol as fun name
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(7,9);
    c3=c1+c2;
    c3.showdata();
}