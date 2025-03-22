#include<iostream>
using namespace std;
int main(){
  // Write a program to find sum of all natural numbers between 1 to n
      int n,sum=0;
      cout<<"enter any no. :"<<endl;
      cin>>n;
      for(int i= 0; i<=n;i++){
        cout<<i<<" ";
        sum=i+sum;
      }   cout<<sum<<endl; 
}