#include<iostream>
using namespace std;
void swap(int a,int b){
  int temp;
temp=a;
a=b;
b=temp;
cout<<"after swapiing :"<<"a :"<<a<<" \t  b:"<<b;
}
int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    swap(a,b);//call by value we saiy that this type of function because data is copy in function
}