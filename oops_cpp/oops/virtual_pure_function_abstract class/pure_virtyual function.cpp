/*
virtual function==1) it should be defined                          ||| pure virtual function ==2)it is initialized by 0;
2)==it is called super class                                       ||| it  is  called abstract class
3)==both object can be create and call normal and pointer object    |||only pointer object ccan be create
4)==child class need thier  not redefine virtual function             |||pure virtual function should be redefine


*/
#include<iostream>
using namespace std;

 class Rbi{
    public:virtual void loan()=0;
    virtual void show()=0;
 };
 class sbi:public Rbi{
    public: void loan(){
        cout<<"6.5";

    }
    public: void show()
    {
        cout<<"sbi";
    } 
 };
 int main(){
 Rbi *p;
 sbi s;
 p=&s;
 p->show();
 
 }
































