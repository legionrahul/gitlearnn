#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(complex &c) //copy constructor....
    {
        a=c.a;
        b=c.b;
    }
    complex(int x,int y)
    {a=x,b=y;

    }
};
int main()
{
    complex c1(1,2);complex c2(c1);
}