#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"cost of purchasing item :";
    cin>>n;
    cout<<endl;
    int d=n/10;
    int p=n-d;
    cout<<"discount of user :"<<d<<endl;
    cout<<"only you pay :"<<p<<endl;

    // --------Write a program to calculate whether year is leap year or not?
   // int year ;
   // cout<<"enter a year :";
   // cin>>year;
   // /*
      // fact========1): leap year comes in every four year (divisible by 4)but
      // 2):  century year is not a leap year except:
      // 3)  if century year is divisible by 400 so it is also leap year
   
   // if((year%400&&year%100!=00)||year%400==0){
   //  cout<<year<<" is a leap year";
   // }
   // //important question 

   // else{
   // cout<<year<<"is not a leap year";
   // }
}