#include<iostream>
using namespace std;

bool prime(int n){
    bool is_prime=true;
   for(int i=2;i<n/2;i++){
     if(i%2==0){
  is_prime=false;
     }
   }
     if(is_prime==true){
        return true;
     }
     else{
        return false;
     }
   
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<prime(n);
}