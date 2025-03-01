#include<iostream>
using namespace std;
int main(){
    // Write a program to Take values of length and breadth of a rectangle from user ,also Take value of side of a square from user ,and check which area is greater.
    int l,b;
    cout<<"Enter a length :"<<endl;
    cin>>l;
    cout<<"Enter a breadth :"<<endl;
    cin>>b;
    int ar=l*b;
    int ars=l*l;
    // ar>ars? cout<<"rectangle is greater "  :cout<<"square is greater ";
    if(ar>ars){
        cout<<"rectangle's area is greater  "<< ar<<" than square";

    }else{
        cout<<"square's area is greater  "<< ars<<" than rectangle";

    }

}























