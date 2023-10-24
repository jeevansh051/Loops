#include<iostream>
#include<bitset>

using namespace std;


int main()
{
 int var1;
 int x;
 cout<<"enter last 5 digits of prn";
 cin>>var1;

 for(int i=0;i<5;i++){
    x=var1%10;
   cout<<x<<endl;
   var1=var1/10;
   
 }
}