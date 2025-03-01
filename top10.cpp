#include<iostream>
using namespace std;
int main(){
   /*  Write a program to A school has following rules for grading system: 
a. Below 25 - F 
b. 25 to 45 - E 
c. 45 to 50 - D 
d. 50 to 60 - C 
e. 60 to 80 - B 
f. Above 80 - A */
int marks;
cout<<"enter a percentage :"<<endl;
cin>>marks;
  if(marks<25){
    cout<<"grade : F";
  }
  else if(marks<45){
    cout<<"grade : E";
  
  }else if(marks<50){
    cout<<"grade : D";

  }else if(marks<60){
    cout<<"grade : C";

  }else if(marks<80){
    cout<<"grade : B";

  }else if(marks<=100){
    cout<<"grade : A";
    
  }


}