#include<iostream>
using namespace std;
class Rbi{
    public:Rbi(){
        cout<<"rbi constructor.."<<endl;
    }
};
class sbi:public Rbi{
    public:sbi(){
 cout<<"sbi constructor"<<endl;
    }
   
    };
    class pnb:public Rbi{
    public:pnb(){
 cout<<"pnb constructor";
    }
   
    };
    class axis:public Rbi{
    public:axis(){
 cout<<"axis constructor";
    }
   //hirerichal inheritance has only one base class but mutiple child class  
   //every child has different object;
    };
    int main(){
        sbi s;
        pnb p;
        axis a;
    }

