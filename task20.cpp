#include<iostream>
using namespace std;
int main(){
    int count=0,num1,num2;
    cout<<"enter no.1 and 2"<<endl;
    cin>>num1;
    cin>>num2;
    for(int i=num1;i<=num2;i++){
        if(i%9==0){
         
             cout<<i<<endl;
                count++;
        }
        
    }cout<<count<<endl;
   

}