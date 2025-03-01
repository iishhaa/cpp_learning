#include<iostream>
using namespace std;
int product(int qty){
    return qty*500;
//real time problem always be return type because this type function used in our client site and never change in server
}
int main()
{
    int qty;
    cout<<"enter quantity :"<<endl;
    cin>>qty;
    cout<<product(qty)+product(qty)+10;
    //cost+profit//cost-selling//loss
}
