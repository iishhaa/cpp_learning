#include<iostream>
using namespace std;
class weight{
    int kg,gm;
    public:weight(int k=0,int g=0){
        kg=k;
        gm=g;
    }
    weight operator+(weight &w ){
        weight temp;
        temp.kg=kg+w.kg;
        temp.gm=w.gm;
        return temp;
    }
     void show(){
        cout<<"kilogram"<<kg<<" & "<<"gram"<<gm<<"\n";
    }
};
int main(){
    weight w1(200,30);
    weight w2(200,30);
    weight w3=w1+w2;
    w3.show();

}
//operator overloading
/*
 used in games creation
*/