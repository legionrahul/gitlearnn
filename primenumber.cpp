#include<iostream>
using namespace std;
int main()
{
    int y,i,flag;
   int x;

   cin>>x;
      if(x<0)
   { cout<<"negtive number are no";}
   
   if(x>0)
   {
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        flag=0;
        break;
     
     
    }
    if(flag){
    cout<<"prime";}
    else 
    cout<<"not prime";
   }
    
}