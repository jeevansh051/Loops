#include<iostream>
using namespace std;


int main()
{
int num,i=0;

cout<<"enter number to find the table: \n";
cin>>num;
cout<<"the table of: "<<num<<endl;
for(i=0;i<=10;i++){
    cout<<i*num<<endl;
}
}