#include<iostream>
using namespace std;
int main(){
    int n;
    // 3. Write a program to print tables ??
    cout<<"enter a number :"<<endl;
    cin>>n;
    // for(int i=10;i>=1;--i){
    //     cout<<n<<" x "  <<i<< " ="<<n*i<<endl;//reverse table

    // }
    for(int i=1;i<=10;i++){
        cout<<n<<" x "  <<i<< " ="<<n*i<<endl;//forward table
        
    }
}