#include<iostream>
using namespace std;
int sum(int x,int y,int z=0)

{
    return(x+y+z);
}
int main()
{
    int a,b,c;
    cout<<"enter numbers";
    cin>>a>>b>>c;
    cout<<sum(a,b,c)<<sum(a,b);

}
