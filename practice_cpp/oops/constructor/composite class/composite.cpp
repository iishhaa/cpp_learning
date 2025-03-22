// 
// more than one class is CALLED  multi class
// when we have to send virus so we have to create composite class
#include<iostream>
using namespace std;
class scam{
   public :void virus(){
    cout<<"ur system got hacked"<<endl;

   }
};
class client{
    scam d;
    public:void reward(){
        cout<<"ur got 80000000"<<endl;
        d.virus();
    }

};
int main(){
client c;
c.reward();
}