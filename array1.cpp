// wap to create array for n elements?
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,average;

    cout<<"enter a size of array :";
    cin>>n;
        int ar[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of "<<i<<" ";
        cin>>ar[i];
    }for(int i=0;i<n;i++){
        cout<<"index of "<<i<<" : "<<ar[i]<<" ";
        sum=sum+ar[i];
        average=sum/n;//traverse loop===>it is used for output  same no.are given in array
           }
    cout<<"\n"<<sum<<endl;
    cout<<"average :"<<average<<endl;
}