#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int x,int y) //prametrized constructor
    {a=x,b=y;

    }
    complex() //deafault constructor
    {
    }
};
int main()
{
    complex c1(2,3),c2; //constructor overloading..
}