#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
    friend void fun(A,B);
};
class B
{
    int b;
    public:
    void setdata(int x)
    {
        b=x;
    }
    friend void fun(A,B);
    };
void fun(A obj1,B obj2)
{
    cout<<obj1.a+obj2.b;

}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(2);
    obj2.setdata(2);
    fun(obj1,obj2);
}