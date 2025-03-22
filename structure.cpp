#include<iostream>
using namespace std;
struct demo{
    string name;
    //if we do 'private data age so we can't be accesible so we can only initialize the value not the access
    int age;
    //structure used in c to store multiple data types
    //but it has no concept of oops
    void show(){
        cout<<name<<" "<<age<<"\n";
    }
};
int main(){
demo d;
d.name="rohit";
d.age=13;
d.show();
demo a;
a.name="rakhi";
a.age=14;
a.show();
demo *p;
//*p it is a ponter it can store address of the data 
p=&d;//&d it is used to assigning the address
p->show();//-> is called this pointer it is used to for current variable
demo c;
c.name="neha";
c.age=12;
demo b;
b.name="vinnit";
b.age=11;
demo *p1;
p1=&c;
p1->age=70;
p1->show();
 demo *w;
 w=&b;
 w->name="rashi";
  w->show();
}