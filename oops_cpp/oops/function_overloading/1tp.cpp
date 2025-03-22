#include<iostream>
using namespace std;
//funcyion overloading == a class has multiple function with same no. is called function overloading  
class cybrom{
    int a,b,c;
    public: void sum(int x,int y){
        int a=x;
        int b=y;
        cout<<"sum of two parameters="<<x+y<<endl;
    }
 void sum(int x,int y,int z){
        int a=x;
        int b=y;
        int c=z;
        cout<<"sum of three parameters="<<x+y+z<<endl;
        
    }
    void sum(){
       
        cout<<"function is overloaded"<<endl;
        
    }
};
    int main(){
   cybrom c;
 c.sum();
 c.sum(10,20);
 c.sum(10,20,30);
    }
