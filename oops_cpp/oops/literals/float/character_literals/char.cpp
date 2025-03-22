#include<iostream>
 using namespace std;
 int main(){
char a='p';
//o/p=p
 char b='isha';
 //o/p= a it is because of it takes only 1 bit so last word print
 cout<<a<<"\n"<<b<<"\n";//
//  when  we use string literals "";
// char ch="sumit";-- it gives error because of character double code is not allow if write a character datatype
char ch[]="sumit";//op=sumit --- it is because of size is not given it takes space according to the string
// char ch[5]="sumit"//it gives error because of if we  have to print word so we have to  giver one extra size for null cxharacter
char ch1[6]="sumit";
cout<<ch1<<endl;
 }