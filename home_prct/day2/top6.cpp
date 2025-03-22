// 7. Write a program to print all even numbers between 1 to 100 ??
#include<iostream>
using namespace std;
int main(){
    int n,count=0,sum=0;
    cout<<"enter a number :"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){

            cout<<i<<endl;
            count++;
           sum=sum+i;
        }
    }        
        cout<<count<<endl;
     cout<<sum <<endl;
}
