//wap to search the names of strings ??
#include<iostream>
using namespace std;
int main(){
    int n;
    string temp,search;
    cout<<"enter size of array "<<endl;
    cin>>n;
    string name[n];
    cout<<" enter name : "<<endl;
    cin>>temp;

    
    cout<<"which name do you want to search and position"<<endl;
   cin>>search;
    for(int i=0;i<n;i++){
        if(search==name[i]){
          cout<<"it is available "<<i<<" : "<<endl;
        }
        
    }
}