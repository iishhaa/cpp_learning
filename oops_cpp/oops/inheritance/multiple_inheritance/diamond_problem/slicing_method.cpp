#include<iostream>
using namespace std;
class Sbi{
    public:void msg(){
        cout<<"sbi";
    }
};
class axis{
    public:void msg(){
        cout<<"axis";
    }
};
class customer:public Sbi,public axis{
    public:void cusmsg(){
        cout<<"customer";
    }
};
int main(){
    customer obj;
    // obj.msg();//diamond problem arises==when parent class has same name of function signature then diamond problem arises because compiler confused
    obj.Sbi::msg();
     obj.axis::msg();//resolve by slicing process
     Sbi s=obj;//type casting//explicit
     //one more way
     s.msg();//it takes extra memory because of sbi class create one more object//memory waste
     //one more way
     static_cast<Sbi>(obj).msg();
}