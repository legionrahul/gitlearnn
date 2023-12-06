#include<iostream>
using namespace std;
class account 
{
    private:
    int balance;//instance member variable
    static float roi;//static member variable
    public:
    static void setroi(float x)
    {
        roi=x;
    }
};
    float account:: roi;

int main()
{
    account::setroi(5.8);
}
