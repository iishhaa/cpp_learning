#include<iostream>
//constant variable initialize again by the help of initializer list
//constant variable re-initalize by the run time neither  of compile time
/*
 if you give value enter the function so it is compile time
*/
using namespace std;
class Rbi{
    const int rate,amount;
    public:Rbi(int r,int a):rate(r),amount(a){//it is inililizer list for re-initialize the value and it also take one more items in list
        cout<<"rate="<<rate<<endl;
        cout<<"amount="<<amount<<endl;
    }
};
int main(){
    Rbi  sbi(6,100000);
    Rbi axis(3,100000);
}
