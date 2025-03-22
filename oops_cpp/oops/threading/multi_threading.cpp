#include<iostream>
using namespace std;
 #include<thread>
 void even(int s,int t){
    for(int i=s;i<=t;i++){
        if(i%2==0){
            cout<<"even no :"+i<<endl;
        }
    }
 }
 void odd(int s,int t){
    for(int i=s;i<=t;i++){
        if(i%2==0){
            cout<<"odd no :"+i<<endl;
        }
    }
 }
 int main(){
    thread t1(even,1,200);
    thread t2(odd,1,200);
 }