#include<iostream>>
using namespace std;
int main(){
  /*  Wap to check whether a person eligible to drive a car in ncr on Monday (day 1)
1) check driving licence first
2)check car number 
3)check puc*/
int choices,car_num,num;
cout<<"enter a day no. :"<<endl;
cin>>num;
cout<<"have u driving license type yes for 'y'or no for 'n'"<<endl;
cin>>choices;
if(choices=='y'){
    cout<<"have u puc type yes for' y'  or  no 'n'"<<endl;
     cin>>choices;
    if (choices=='y'){
        cout<<"enter your car number :"<<endl;
    
          if(car_num==car_num%2==0)
          cout<<"u are elegible too drive a car";
            
        else
           cout<<"u are not elegible to drive car because of ur car no.is not even";
     
    }
     
      else{
    cout<<"Sorry u are not elegible today to drive car REason haven't puc   ";
}
}
else{
    cout<<"Sorry u are not driving today REASON 'DRIVING LICENCE' "<<endl;
}
}