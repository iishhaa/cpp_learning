#include<iostream>
using namespace std;
 int main(){
    // 12. Write a program to find the factorial value of any number
   int n,fact=1;
   cout<<"enter any no. : "<<endl;
   cin>>n;
   for(int i=n;i>=1;i--){
    fact=fact*i;
    
    cout<<"factorial :"<<fact<<endl;
   }
 }