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
    friend void fun(complex);
};
void fun(complex c)
{
    cout<<c.a+c.b;
}
int main()
{
    complex c1;
    c1.setdata(2,3);
    fun(c1);
    
}