#include<iostream>
using namespace std;


int main()
{
int num,i=0;

cout<<"enter number to find the table: \n";
cin>>num;
cout<<"the table of: "<<num<<endl;
do
{
      cout<<i*num<<endl;
      i++;
} while (i<=10);
}
