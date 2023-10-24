#include<iostream>
using namespace std;


int main()
{
int num,i=0;

cout<<"enter number to find the table: \n";
cin>>num;
cout<<"the table of: "<<num<<endl;
while(i<=10){
    cout<<i*num<<endl;
    i++;
}
}