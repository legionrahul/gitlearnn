#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two number";
    cin>>x>>y;
    //we apply +and -operator
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"value of x is"<<x<<"value of y is"<< y;

}