#include<iostream>
using namespace std;
class Rbi{
    public:Rbi(){
        cout<<"constructor rbi \n";
    }
   void msg(){
        cout<<"class rbi \n";
    }
~Rbi(){
    cout<<"rbi delete\n";
}
};
class Sbi:public Rbi{
     public:Sbi(){
        cout<<"constructor Sbi \n";
    }
public:void info(){
 cout<<" information \n";
}
~Sbi(){
    cout<<"sbi delete\n";
}
};

int main(){
    Sbi custoumer;
    custoumer.info();
    custoumer.msg();
}
