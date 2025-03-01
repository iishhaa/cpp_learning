#include<iostream>
using namespace std;
int main(){
//     int l,b;
//     cout<<"enter the length:"<<endl;
//     cin>>l;
//      cout<<"enter the breadth:"<<endl;
//      cin>>b;
     
//     //  l==b ? cout<<"it is square " :cout<<"it is not a square";
//    if(l==b){
//     cout<<"it is a square"<<l*b<<endl;

//    }
//    else {
//     cout<<"it is not a square"<<l*b<<endl;
//    }



//  quest 2==========

/*Write a program that accepts marks (out of 100) of five subjects from user and calculate the sum then calculate percentage? Display message according to following condition:
percentage >=60 Grade A
percentage >=50 Grade B
percentage >=40 Grade C
percentage  <40 Grade D*/

int m1,m2,m3,m4,m5;
float percentage;
cout<<"entter a marks of  hindi";
cin>>m1;
cout<<"entter a marks of english";
cin>>m2;
cout<<"entter a marks of chemistry";
cin>>m3;
cout<<"entter a marks of physics";
cin>>m4;
cout<<"entter a marks of  maths";
cin>>m5;
cout<<"total marks :"<<endl;
percentage=(m1+m2+m3+m4+m5)/5;

cout<<"percentage"<<percentage;
if(percentage >=60){
    cout<<"grade : A";
}
   else if(percentage >=50){
    cout<<"grade : A";
} else if(percentage >=40){
    cout<<"grade : A";
} else if(percentage <40){
    cout<<"grade : A";

}else{
    cout<<"invalid";
}


}