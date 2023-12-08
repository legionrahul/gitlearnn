#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("kalua.txt");
    char ch;
    fin>>ch;
while(!fin.eof())
{
    cout<<ch;
    fin>>ch;
}
}