#include<iostream>
using namespace std;
int power(int pow,int base){
    int pr=1;
    for(int i=1;i<=pow;i++){
   pr=base*pr;
    }
    return pr;
}
int main(){
    int base,pwer;
    cout<<"enter base";
   cin>>base;
    cout<<"enter pow";
    cin>>pwer;
    cout<<power(pwer,base);
}
