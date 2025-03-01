#include<iostream>
using namespace std;

void swap(int  &a,int &b){//call by reference alsways get by adderss operator
  int temp;
temp=a;
a=b;
b=temp;
}
int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    swap(a,b);//
cout<<"after swapiing :"<<"a :"<<a<<" \t  b:"<<b;//address manipulate//extra memory not  created//manipulate the address of the data

}