#include<iostream>
using namespace std;
class atm{
int amount,*loc;
public:atm(atm &t)
   {
    amount=t.amount;
    loc=new int;
    *loc=*(t,loc);
   }
   atm(int amt,int adres){
    amount=amt;
    loc=new int;
    loc=&adres;

   }
   void transaction(int a){
    amount=amount+a;
    *loc=*loc+1;

   }
   void show()
   {
    cout<<"balance :"<<amount<<"\t";
    cout<<"location="<<*loc<<"\n";
   }
   };

int main(){
    atm mpnagar(1000,101);
    atm bhel(mpnagar);
    mpnagar.show();
    bhel.show();
    mpnagar.transaction(10000);
    mpnagar.show();
    bhel.show();
}