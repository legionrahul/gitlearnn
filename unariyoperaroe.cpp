#include<iostream>
using namespace std;
class complex 
{
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
    void showdata()
    {
        cout<<a;
    }
    complex operator -()
    {
        complex temp;
        temp.a=-a;
        
        return(temp);
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(3);
    c2= -c1;
    c2.showdata();
}