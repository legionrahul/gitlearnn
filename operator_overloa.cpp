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
    complex add(complex c)
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
    c1.setdata(2,4);
    c2.setdata(3,7);
    c3=c1.add(c2);
    c3.showdata();
}                                                                                                                                                                                     