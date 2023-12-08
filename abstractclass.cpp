#include<iostream>
using namespace std;
class A
{
    public:
    virtual void fun()=0;//abstract class have an do nothing function
};
class B:public A{
    public:
    void fun()
    {
        cout <<"hi";
    }
};
int main()
{

}