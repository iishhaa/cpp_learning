#include<iostream>
using namespace std;
class  atm{
    public:atm(int cardno){
        cout<<"card-no :"<<cardno<<"\n";
    }
    
};
class customer:public atm{

    public:customer(int c,int p):atm(c){//intilizer also helps to active cunstructor of parent class by child class
        cout<<"pwd :"<<p<<endl;
    }
};
int main(){
customer paisa(1091,2345);
}