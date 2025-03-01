#include<iostream>
using namespace std;
int main(){
    // try block made be first 
    // after than throw keyword used in under thee try block}
    // after this you have to catch datatype like catcch(int e)
    // exception_handlimg used to  avoid abnormal problems
    //whhenever os generate problems and give garbage value to the program so we used exception handling
    int a,b;
    cout<<"enter 2 no \n";
    cin>>a>>b;
    try
    {
        if(b==0){
            throw b;

        }
        cout<<a/b;
    }
    catch(int e){
    cout<<"denominator can  not be zero ";
    }
   cout<<" \ndone" ;
   //if is a condition where we used to if the situation is abnormal 
//    otherwise ans
//if condition is true than it handle or catch by catch block that is same datatype of (if condition datatype)
}
