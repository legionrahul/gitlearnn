#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    
    
    if(a>b && b>c)
    cout<<c;
    if(b>a && b>c)
    cout<<b;
    if(c>a && c>b)
    cout<<c;

    

}