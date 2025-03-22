#include<iostream>
using namespace std;
#include<string.h>
class tcs{
    public: 
    string n;
    int s;
    public :tcs(string a,int b){
        // public :tcs(char a[10],int b){
        // strcpy(n,a)
    n=a;  
    s=b;
   
        cout<<"name :"<<n<<endl;
        cout<<"salary :"<<s<<endl;
    }  

};
int main(){
    tcs t("isha",12000);
}