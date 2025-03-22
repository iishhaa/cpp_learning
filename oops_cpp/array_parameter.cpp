#include<iostream>
using namespace std;
void funarr(int a[],int &s)
{
    for(int i=0;i<s;i++){
        
     a[i]= a[i]+10;
    }
    }

int main(){
int a[]={23,45,78,98};
int s=sizeof(a)/sizeof(a[0]);
funarr(a,s);
for(int i=0;i<s;i++){
cout<<a[i]<<" ";
}
}