#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout<<"enter a integer value of m :";
    // cin>>m;
    // m>0 ? cout<<" ok":cout<<"bye";

    // question 2====================


    /*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
    int bonus,year,salary;
    cout<<"enter your salary :"<<endl;
    cin>>salary;
    cout<<"enter service of year :"<<endl;
    cin>>year;
    bonus=salary*5/100;
    if (year<=5)
    {
        cout<<"your bonus :"<<bonus<<endl;
        cout<<"now your total_salary : "<<salary+bonus<<endl;
    }
    else{
        cout<<" you are not elegible to take bonus reason = year of service less than 5 years";
    }
}