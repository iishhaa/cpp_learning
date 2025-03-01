#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter any no.";
    cin>>number;
    if(number >=  100 && number <=999){
        cout<<"it is a three digit number.";

    }else{
        cout<<"it is not a 3digit no.";
    }
}