#include<iostream>
using namespace std;
class joy{
    public :joy(){
        cout<<"joy class\n";//it is implicit function that call or invoke by deefault
        //constructor  given memory allocation to the object
    }
    //destructor====
    ~joy(){
        cout<<"by by memory deleted\n";
    }
    void show(){
        cout<<"hello bro !!!";
    }
};
int main(){
    joy j;
    j.show();
    joy j1;
                         
}