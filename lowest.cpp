//wap to find the highest and lowest element in a array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size  :"<<endl;
    cin>>n;
    int marks[n];
    int high=marks[0];
    int low=marks[0];
   for(int i=0;i<n;i++){
    cout<<"index of  "<<i<<endl;
    cin>>marks[i];

   }
   for(int i=0;i<n;i++){
    cout<<marks[i]<<" ,";
    
   }
  for(int i=0;i<n;i++){
    if(marks[i]>high){
        high=marks[i];
    }else if(marks[i]<low){
        low=marks[i];
    }
  }
  cout<<"highest :"<<high;
  cout<<"\nlowwst :"<<low;
   }