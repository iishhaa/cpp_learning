#include<iostream>
using namespace std;
int main(){
    // int m, n;
    // cout<<"enter any no"<<endl;
    // cin>>n;
    //  cout<<"enter any no"<<endl;
    // cin>>m;
    // // n==m ?cout<<"both are equal":cout<<"both are not equal";
    // if(n==m){
    //     cout<<"both are equal";
        
    // }else{
    //     cout<<"both are not equal";
    // }


    //====question 2=====================

    /*Write a program to calculate smallest number out of given three numbers.
*/
   int a,b,c;
   cout<<"enter a";
   cin>>a;
    cout<<"enter b";
   cin>>b;
    cout<<"enter c";
   cin>>c;
   if(a<b && a<c){
     cout<<a<<" is smallest\n";
    if(b<c)
        cout<<b<<" is second smallest\n";
    else
       cout<<c<<" is second smallest\n";
   }
   else if(b<a && b<c){
     cout<<b<<" is smallest\n";
     if(a<c)
        cout<<a<<" is second smallest\n";
    else
       cout<<c<<" is second smallest\n";
   }else 
  {
     cout<<c<<" is smallest\n";
     if(b<a)
        cout<<b<<" is second smallest\n";
    else
       cout<<a<<" is second smallest\n";
   }
   
}