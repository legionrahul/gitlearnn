#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("kalua.txt",ios::app);
    fout<<"hello linux";
int pos;
pos=fout.tellp();
cout<<pos;
}
