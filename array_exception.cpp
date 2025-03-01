#include<iostream>
using namespace std;
int main(){

    int arr[2]={20,34};
    int i;
    try{
        cout<<"enter index";
        cin>>i;
        if(i>1){
            throw i;
        }
        cout<<arr[i];
    }
    catch(int i){
        cout<<"out of range :";

    }
    cout<<"by byye babe!!";
}