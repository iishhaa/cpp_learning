// wap to print string with the help of array
#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<" give the size of array :"<<endl;
    cin>>n;
    string ar[n];
    
      
    
     for(int i=0;i<n;i++){
        cout<<"enter a names "<<endl;
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cout<<"name :"<<i<<" : "<<ar[i]<<endl;
    }
 }