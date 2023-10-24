#include<iostream>

using namespace std;


int main()
{
int num,z,bit=0;
cout<<"enter a number: \n";
cin>>num;
for(int i=0;i<=8;i++){

  if(num & 1){
    z++;
    
  }
  num=num>>1;
}
cout<<"number of ones in binary are :"<<z;



}
