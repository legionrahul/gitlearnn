#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
     void fun()
    {
        cout<<"im parent fun";
    }
};
class B:public A
{
    public:
    void fun()
    {
        cout<<"im child fun";
    }
};
int main()
{    A op;
    B obj;
    obj.fun();
    op.fun();

}
