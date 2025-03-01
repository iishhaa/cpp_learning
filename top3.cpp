#include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    // cout<<"enter a"<<endl;
    // cin>>a;
    // cout<<"enter b"<<endl;
    // cin>>b;

    // cout<<"enter c"<<endl;
    // cin>>c;
    // if(a>b && a>c){
    //     cout<<" a is greater"<<endl;
    //    }   else if(b>c&&b>a){
    //     cout<<" b is greater"<<endl;
    //    }
    //    else if(c>a&&c>b){
    //     cout<<"c is greater"<<endl;

    //    }
    //    else if(a==b&&a>c){
    //     cout<<"a and b both are greater than c"<<endl;
    //    }
    //    else if(a>b&&a==c){
    //     cout<<"a  and  c is equal and greater than b"<<endl;
    //    }
    //    else if(b==c&&b>a){
    //     cout<<"b and c both are greater than a"<<endl;
    //    }
    //   else{
    //     cout<<"invalid no";
    //   }
    //  question 2====
    /* Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
 if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.
*/

  int cost,dis,purchase,amount;
cout<<"enter the cost of one pen :";
 cin>>cost;
 cout<<"how many pens you are  purchase :";
 cin>>purchase;
 amount=cost*purchase;
 cout<<"total cost of 70 pens :"<<amount<<endl;
 if(dis>1000){
  cout<<" your discount"<<(amount*20.0)/100<<endl;

 }
}