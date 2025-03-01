#include<iostream>
using namespace std;
int main(){
    /*13. Write a program to find the value of one number raised to the 
power of another.*/
int n,p,result=0;
cout<<"enter a number  : "<<endl;
cin>>n;
cout<<"enter a power :  "<<endl;
cin>>p;
  for(int i=result;i<=p;i++){
    result=result*n;
    // cout<<n<<"^"<<p;
    cout<<result<<endl;
  }
}