#include<iostream>
#include<bitset>

using namespace std;


int main()
{
 int sum=0, avg , marks;

 cout<<"enter marks of 5 subjects: ";
 for(int i=0;i<5;i++){
 cin>>marks;
 sum+=marks;
 }
   avg=sum/5;
   cout<<"\ngrades are : ";
    if(avg>=90 && avg<=100)
       cout<<"O";
    else if(avg>=80 && avg<90)
        cout<<"A+";
    else if(avg>=70 && avg<80)
        cout<<"A";
    else if(avg>=60 && avg<70)
        cout<<"B+";
    else if(avg>=50 && avg<60)
        cout<<"B";
    else if(avg>=40 && avg<50)
        cout<<"PASS";
     else
        cout<<"FAIL";
}