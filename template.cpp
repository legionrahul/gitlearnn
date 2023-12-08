#include<iostream>
using namespace std;
template <class x>
x fun(x a, x b)
{
    if (a>b)
        return(a);
        else 
        return(b);
}
    int main()
    {
        cout<<fun(3,6)<<endl;
        cout<<fun(7.8,7.7);
    }