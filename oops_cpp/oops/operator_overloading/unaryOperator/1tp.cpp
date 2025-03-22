// unary are not used mostly
#include<iostream>
using namespace std;
class A {
    int a ;//data member
    public: A(int a){
        this->a=a;
    }
    void operator ++(){
        a++;
        cout<<a++;
    }

};
int main(){
  A obj(30);
//   ++obj;//
  obj.operator ++();
}
