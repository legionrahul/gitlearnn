#include<iostream>
using namespace std;
class rahul
{
    
    public:
    ~rahul()
    {
        cout<<"im destructor";
    }
};
void fun()
{
    rahul e1;
}
int main()
{
    fun();
}