#include<iostream>
using namespace std;
class sum
{
    int a;
    public:
    void setdata()
    {cin>>a>>b;
    }
    void showdata()
    {
                                                                                              cout<<"sum is"<<a+b;
    }
};
int main()
{
    sum s;
    s.setdata();
    s.showdata();
}                                    
