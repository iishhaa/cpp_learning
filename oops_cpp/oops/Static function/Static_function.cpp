#include<iostream>
using namespace std;
class student
{
    int a,b,c,d;
    public:static void show(){
        cout<<"Static function";
    }
};
// static mem
int main(){
    student::show();
    cout<<sizeof();
}