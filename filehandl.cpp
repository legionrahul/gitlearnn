#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("kalua.txt");
    fout<<"hello";
    
    fout.close();
}