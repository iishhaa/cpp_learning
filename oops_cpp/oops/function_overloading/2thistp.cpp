#include<iostream>
using namespace std;
//funcyion overloading == a class has multiple function with same no. is called function overloading  
class cybrom{
    int a,b,c;
    public: void sum(int a,int b){
      this->a=a;
        this->b=b;
        cout<<"sum of two parameters="<<a+b<<endl;
       
       
    }
 void sum(int x,int y,int z){
        int a=x;
        int b=y;
        int c=z;
        cout<<"sum of three parameters="<<x+y+z<<endl;
        
    }
    void sum(){
       
        cout<<"function is overloaded"<<endl;
        cout<<"a="<<a<<"\t"<<"b="<<b;
    }
};
    int main(){
   cybrom c;
 c.sum(10,20);
 c.sum(10,20,30);
 c.sum();

    }