#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("kalua.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
}