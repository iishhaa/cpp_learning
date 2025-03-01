#include<iostream>
using namespace std;
class atm{
    int amount;
    public : atm(int amount){
        this->amount=amount;
    }
    void show(){
        cout<<"amount :"<<amount<<endl;
    }
};
int main(){
    atm a(20000);
    a.show();//by constructor calling
    atm a1=a;//implict calling by itself ==copy assignment constructor
    a1.show();
    atm a2(a);//it is called by programmer==explicit==shwallow copy constructor
    a2.show();//shwallow copu is buit in program
}