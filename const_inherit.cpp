#include<iostream>
using namespace std;
class A
{
    public:
    A()
    { cout<<"parent consdt";}
};
class B:public A{
    public:
    B():A()
    {
        cout<<"child cont";}
};
int main()

    
{
    B obj;

}