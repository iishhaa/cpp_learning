//non return type of function
#include<iostream>
using namespace std;
class weight{
    /*unary operator overloading has only one operand and its like ++ one parameter*/

    // binary has two operands to perform task its shows with operator+;
    int kg,gm;
    public:weight(int k=0,int g=0){
        kg=k;
        gm=g;
    }
    void operator +(weight &w ){
       kg=kg+w.kg;
        gm=w.gm;
        cout<<"kilogram"<<kg<<" & "<<"gram"<<gm<<"\n";
    }
};
int main(){
    weight w1(200,30);
    weight w2(200,30);
    w1+w2;

}