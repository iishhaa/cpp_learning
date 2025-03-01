#include<iostream>
#include<string.h>
using namespace std;
class student{
    char *name;
    public:
    student(char *s){
        name=new  char[20];
        strcpy(name,s);

    }
    student(student &ob){//deep copy
      name=new char[20];
      strcpy(name,ob.name);
    }
    void display(){
        cout<<"name="<<name<<"\n";

    }
    void concat(char *s){
        strcat(name,s);
    }
    };
    int main(){
        student obj("amit");
        student obj2(obj);
        obj.display();//shwallow copy
        obj2.display();
        obj2.concat("verma")
}