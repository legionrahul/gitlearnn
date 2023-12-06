#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"enter numbers";
    cin>>a>>b>>c;
    cout<<sum(a,b,c);

}
int sun(int x,int y,int z)

{
    return(x+y+z);
}