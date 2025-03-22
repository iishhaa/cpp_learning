// combination of more than one inheritance type is called hybrid inheritance
#include<iostream>
using namespace std;
class A{
    public : void f1(){
        cout<<"a class \n";
    }
};
class B:public  A{
    public : void f2(){
        cout<<"b class \n";
    } 
};
class C:public A{
     public : void f3(){
        cout<<"C class \n";
    }
};
class D:public B,public C{
     public : void f4(){
        cout<<"D class \n";
    }
};
int main(){
     D d;
     d.f2();
     d.f3();
     d.f4();
    //  d.f1()== it is error show because of compiler confused that what way he go to the function 1 so it is called multipath
    // mutltipath means more than one path
}