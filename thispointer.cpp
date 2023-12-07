#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setdata(int x,int y,int z)
    {
        l=x,b=y,h=z;
    }
    void showdata()
    {
        cout<<l<<b<<h;
    }
};
int main()
{
    Box smallbox,*p;
    p=&smallbox;
p->setdata(2,3,5);
p->showdata();
}