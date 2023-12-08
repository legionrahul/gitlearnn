#include<iostream>
using namespace std;
class car
{   int a;
    public:
    void shiftgear()
    {
            
            cout<<"im parent fdun";

    }

};
class sportcar:public car
{  public:
    void shiftgear()
    {
         cout<<"sportmode";
    }
};
int main()
{    car c;
    sportcar b;
    c.shiftgear();
    b.shiftgear();

}