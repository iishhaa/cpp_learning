#include<iostream>
using namespace std;
int main(){
//    8. Write a program to print all odd number between 1 to 100   ???
int n,count=0,sum=0;
  cout<<"enter a  number :"<<endl;
  cin>>n;
  for(int i=0;i<=n;i++){
    if(i%2!=0){
    cout<<i<<endl;
    sum=sum+i;
    count++;

    }
  } 
  cout<<"sum :"<<sum<<endl;
  cout<<count;
}