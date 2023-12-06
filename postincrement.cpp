#include<iostream>
using namespace std;
class interger
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
    interger operator ++(int)
    {
        interger i;
        i.a=a++;
        return(i);

    }
};
int main()
{
    interger i1,i2;
    i1.setdata(5);
    i2=i1++;
    i2.showdata();
    i1.showdata();
}