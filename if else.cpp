#include<iostream>
#include<bitset>

using namespace std;


int main()
{
 int var1;
 int x;
 cin>>var1;
 
 x=var1&1;
 if(x==0){
    cout<<"number is even";
 }
 else{
    cout<<"number is odd";
 }
}