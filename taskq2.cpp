/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include<iostream>
using namespace std;
int main(){
    int t_a,t_c,c_a;
    // cout<<"enter your attendance :";
    cout<<"no.of classess held :"<<endl;
    cin>>t_c;
    cout<<"no. of classes attend :"<<endl;
    cin>>c_a;
    t_a=(c_a)*100/(t_c);
    cout<<"percentage of class attendend :"<<t_a<<endl;
    if (t_a<75){
   cout<<"he is not able to sit in exam"<<endl;
    }
   else {
        cout<<"u are able to sit in exam";
    }
    

}
