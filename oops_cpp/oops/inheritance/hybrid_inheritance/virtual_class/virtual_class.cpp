#include<iostream>
using namespace std;
class A{
    public : void f1(){
        cout<<"a class \n";
    }
};
class B:virtual public  A{
    public : void f2(){
        cout<<"b class \n";
    } 
};// virtual givees straight path
class C: virtual public A{
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
     d.f1();
}