#include<iostream>
using namespace std;
//parameterized constructor == we can creeate a parameterized constructor by using either 1 parameter or more than one
// is class has more than one constructor===yes!!
// if a class has more than one constructor is called constructor overloading
class atm{
  int pwd,code;
  public:atm(int a,int p){
   code=a;
   pwd=p;
    cout<<"code="<<code<<"\t";
    cout<<"pwd="<<pwd<<"\t";
  }
  public:atm(){
cout<<"hello moto!!";
  }
 
   
  
};
int main(){
    int a,b;
    cout<<"enter code and enter pasword="<<endl;
    cin>>a>>b;
    atm p(a,b);//it calls parameterized constructor
     atm k;    //it calls default constructor
   
    
}