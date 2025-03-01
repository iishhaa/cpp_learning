/*W.A.P to read a value and find out the no currencies piece wise required to withdraw that amount.

For Example 
No = 7888
2000 * 3 =6000
500  * 3  =1500
200 * 1   =  200
100 * 1   =  100
50  * 1   =     50
20 * 1 =       20
10 * 1 =       10
5 * 1 =           5
2 * 1    =        2
1 *  1  =         1
Total   is  = 7888*/
#include<iostream>
using namespace std;
int main(){
    int rm,a,n;
    cout<<"enter  rupees : ";
    cin>>a;
    n=a/2000;
    cout<<"2000*"<<n<<endl;
    rm=a-n*2000;
    // cout<<rm;
    n=rm/500;
    cout<<"500*"<<n<<endl;
    rm=rm-n*500;
    
    n=rm/200;
    cout<<"200*"<<n<<endl;
    rm=rm-n*200;

    n=rm/100;
    cout<<"100*"<<n<<endl;
    rm=rm-n*100;

    n=rm/50;
    cout<<"50*"<<n<<endl;
    rm=rm-n*50;

    n=rm/20;
    cout<<"20*"<<n<<endl;
    rm=rm-n*20;

  n=rm/10;
    cout<<"10*"<<n<<endl;
    rm=rm-n*10;

     n=rm/5;
    cout<<"5*"<<n<<endl;
    rm=rm-n*5;

     n=rm/2;
    cout<<"2*"<<n<<endl;
    rm=rm-n*2;

     n=rm/1;
    cout<<"1*"<<n<<endl;
    rm=rm-n*1;


    
}