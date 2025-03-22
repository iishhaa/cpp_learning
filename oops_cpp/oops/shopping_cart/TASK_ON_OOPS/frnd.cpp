#include<iostream>
using namespace std;
 class x;
 class y;
class x
{
    int a=3;
    friend void result(x,y);
};
class y
{
    int b=4;
    friend void result(x,y);
};
void result(x obj1,y obj2){
    if(obj1.a>obj2.b){
        cout<<obj1<<"its highest";
    }
    else{
        cout<<obj2.b<<"its highest";
    }
}
int main(){

}